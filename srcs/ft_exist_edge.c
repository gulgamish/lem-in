/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exist_edge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:36:08 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 18:41:26 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_edge	*ft_exist_edge(t_edge *edge, t_room *from, t_room *to)
{
	while (edge)
	{
		if (edge->from == from && edge->to == to)
			return (edge);
		edge = edge->next;
	}
	return (NULL);
}
