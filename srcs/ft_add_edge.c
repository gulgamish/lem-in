/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_edge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 00:40:11 by aelamran          #+#    #+#             */
/*   Updated: 2019/12/15 00:41:49 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_add_edge(t_edge **edges, t_edge *newedge)
{
	t_edge *temp;

	if (!*edges)
		*edges = newedge;
	else
	{
		temp = *edges;
		while (temp->next)
			temp = temp->next;
		temp->next = newedge;
	}
}
