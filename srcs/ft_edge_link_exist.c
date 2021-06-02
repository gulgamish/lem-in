/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_edge_link_exist.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:32:13 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/12 22:32:28 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*ft_edge_link_exist(t_edge *edge, t_room *from)
{
	while (edge)
	{
		if (edge->from == from && edge->to && edge->to->state == NONE)
			return (edge->to);
		edge = edge->next;
	}
	return (NULL);
}
