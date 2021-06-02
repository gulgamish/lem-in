/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_path.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:41:23 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/14 00:50:56 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*ft_next_room(t_room *from, t_edge *edge)
{
	while (edge)
	{
		if (edge->from == from && edge->flow < 2 && edge->visited == 0)
		{
			edge->visited = 1;
			return (edge->to);
		}
		edge = edge->next;
	}
	return (NULL);
}

int		ft_extract_path(t_room *room, t_edge *edge, t_path **path)
{
	t_room *rm;

	if (!room || room->state == END)
	{
		if (!room)
			return (0);
		return (1);
	}
	else
	{
		rm = ft_next_room(room, edge);
		if (ft_extract_path(rm, edge, path))
		{
			ft_add_path(path, ft_newpath(rm));
			return (1);
		}
	}
	return (0);
}
