/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_there_path.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:42:07 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/19 16:11:08 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void		ft_push_to_cue(t_cue **cue, t_room *room)
{
	t_list	*links;
	t_room	*rm;

	links = room->links;
	while (links)
	{
		rm = (t_room *)links->content;
		if (rm->visited == 0)
		{
			rm->visited = 1;
			ft_add_cue(cue, ft_newcue(rm));
		}
		links = links->next;
	}
}

static int	ft_bfs_for_path(t_cue *cue)
{
	if (!cue)
		return (0);
	if (cue->room->state == END)
		return (1);
	else
	{
		cue->room->visited = 1;
		ft_push_to_cue(&cue, cue->room);
		if (ft_bfs_for_path(cue->next))
			return (1);
	}
	return (0);
}

int			ft_is_there_path(t_room *start)
{
	t_cue	*cue;
	int		ret;

	cue = ft_newcue(start);
	ret = ft_bfs_for_path(cue);
	ft_free_cue(cue);
	return (ret);
}
