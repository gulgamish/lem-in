/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paths_helper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 18:54:40 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/19 18:56:11 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_run_bfs(t_infos *infos, t_edge **edge)
{
	t_cue	*cue;

	cue = ft_newcue(infos->start_room);
	ft_bfs(cue, edge);
	ft_free_cue(cue);
}

void	init_path_var(t_groups **groups_solve, t_edge **edge, int *score_prev)
{
	*score_prev = 2147483647;
	*groups_solve = NULL;
	*edge = NULL;
}

void	ft_paths_norme(t_groups **groups_solve, t_infos **infos, t_edge **edge)
{
	ft_orchestrate_ants(*groups_solve, *infos);
	ft_free_group(*groups_solve);
	ft_free_edges(*edge);
}
