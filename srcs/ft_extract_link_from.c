/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_link_from.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:34:34 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/12 22:34:48 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*ft_extract_link_from(t_edge *edge, t_room *to)
{
	while (edge)
	{
		if (edge->to == to && edge->from->state == NONE && edge->flow < 2)
			return (edge->from);
		edge = edge->next;
	}
	return (NULL);
}
