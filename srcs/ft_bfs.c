/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bfs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:29:28 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/15 21:39:02 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_pushincue(t_cue **cue, t_room *room, t_edge *edge)
{
	t_list	*links;
	t_room	*rm;

	links = room->links;
	while (links)
	{
		rm = (t_room *)links->content;
		if (rm->visited == 0 && ft_check_forbiden_path(edge, room, rm)
				&& ft_check_path_flow(edge, rm, room) && rm->state != START)
		{
			rm->visited = 1;
			ft_add_cue(cue, ft_newcue(rm));
			rm->previous = room;
		}
		links = links->next;
	}
}

void	ft_maxflow(t_room *room, t_edge *edge, t_cue **cue)
{
	t_room *rm;

	rm = NULL;
	if (room->state == NONE && (rm = ft_extract_link_from(edge, room))
			&& ft_edge_link_exist(edge, room->previous) == NULL)
	{
		rm->previous = room;
		ft_add_cue(cue, ft_newcue(rm));
		rm->visited = 1;
	}
	else
		ft_pushincue(cue, room, edge);
}

t_room	*ft_bfs(t_cue *cue, t_edge **edge)
{
	t_edge	*edg;
	t_room	*room;

	if (!cue)
		return (NULL);
	else if (cue->room->state == END)
		return (cue->room);
	else
	{
		cue->room->visited = 1;
		ft_maxflow(cue->room, *edge, &cue);
		if ((room = ft_bfs(cue->next, edge)))
		{
			if (room->previous)
			{
				if ((edg = ft_exist_edge(*edge, room, room->previous)))
					edg->flow++;
				else
					ft_add_edge(edge, ft_newedge(room->previous, room, 1));
			}
			return (room->previous);
		}
	}
	return (NULL);
}
