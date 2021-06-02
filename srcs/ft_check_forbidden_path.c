/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_forbidden_path.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:37:34 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/12 22:37:56 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_check_forbiden_path(t_edge *edge, t_room *from, t_room *to)
{
	while (edge)
	{
		if (edge->from == from)
		{
			if (edge->to == to)
				return (0);
		}
		edge = edge->next;
	}
	return (1);
}
