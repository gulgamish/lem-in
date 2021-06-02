/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_path_flow.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:40:04 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/12 22:40:17 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_check_path_flow(t_edge *edge, t_room *from, t_room *to)
{
	while (edge)
	{
		if (edge->from == from)
		{
			if (edge->to == to)
			{
				if (edge->flow == 2)
					return (0);
			}
		}
		edge = edge->next;
	}
	return (1);
}
