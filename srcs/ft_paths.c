/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paths.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 16:21:05 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 19:17:45 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_collect_paths(t_groups **group, t_room *start, t_edge *edge)
{
	t_list	*links;
	t_path	*path;
	int		nbr_path;

	links = start->links;
	nbr_path = 0;
	while (links)
	{
		path = NULL;
		ft_extract_path(start, edge, &path);
		if (path)
		{
			nbr_path++;
			ft_add_group(group, ft_newgroup(path, ft_count_nodes(path)));
		}
		links = links->next;
	}
	ft_sort_paths(group, nbr_path);
	return (nbr_path);
}

int		ft_nbr_of_paths(t_groups *group)
{
	int count;

	count = 0;
	while (group)
	{
		count++;
		group = group->next;
	}
	return (count);
}

int		ft_ceil(float num)
{
	int inum;

	inum = (int)num;
	if (num == (float)inum)
		return (inum);
	return (inum + 1);
}

int		ft_is_right_group(t_groups *group, t_groups **groups_solve,
		int nbr_ants, int *score_prev)
{
	int	score;
	int	nbr_path;

	nbr_path = ft_nbr_of_paths(group);
	score = ft_ceil((nbr_ants + ft_nbrnodes_paths(group)) / nbr_path);
	if (score >= *score_prev)
		return (1);
	if (*groups_solve)
		ft_free_group(*groups_solve);
	*score_prev = score;
	*groups_solve = group;
	return (0);
}

void	ft_paths(t_infos *infos)
{
	t_list		*links;
	t_edge		*edge;
	t_groups	*group;
	t_groups	*groups_solve;
	int			score_prev;

	init_path_var(&groups_solve, &edge, &score_prev);
	links = infos->start_room->links;
	while (links)
	{
		ft_run_bfs(infos, &edge);
		group = NULL;
		if (ft_collect_paths(&group, infos->start_room, edge))
			if (ft_is_right_group(group, &groups_solve,
						infos->nb_of_ants, &score_prev))
			{
				ft_free_group(group);
				break ;
			}
		ft_reset(infos->rooms);
		ft_reset_edges(edge);
		links = links->next;
	}
	ft_paths_norme(&groups_solve, &infos, &edge);
}
