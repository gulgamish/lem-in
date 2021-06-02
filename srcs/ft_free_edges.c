/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_edges.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:59:41 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 15:49:46 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_free_edges(t_edge *edge)
{
	t_edge *edge_tmp;

	while (edge)
	{
		edge_tmp = edge;
		edge = edge->next;
		free(edge_tmp);
	}
}
