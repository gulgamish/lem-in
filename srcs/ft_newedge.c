/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newedge.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 00:26:21 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/16 21:32:58 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_edge	*ft_newedge(t_room *from, t_room *to, int flow)
{
	t_edge *edge;

	if (!(edge = (t_edge *)malloc(sizeof(t_edge))))
		return (NULL);
	edge->from = from;
	edge->to = to;
	edge->flow = flow;
	edge->visited = 0;
	edge->next = NULL;
	return (edge);
}
