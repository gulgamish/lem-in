/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrnodes_paths.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 00:34:12 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/14 00:37:27 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_nbrnodes_paths(t_groups *group)
{
	int count;

	count = 0;
	while (group)
	{
		count += (group->node_nbr - 1);
		group = group->next;
	}
	return (count);
}
