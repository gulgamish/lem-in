/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_paths.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:46:36 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/15 19:16:03 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_groups	*ft_swap(t_groups *path1, t_groups *path2, t_var *var)
{
	t_groups *tmp;

	tmp = path2->next;
	path2->next = path1;
	path1->next = tmp;
	var->swapped = 1;
	return (path2);
}

void		init_sort(t_var *var)
{
	var->j = 0;
	var->swapped = 0;
}

void		ft_sort_paths(t_groups **groups, int count)
{
	t_groups	**h;
	t_var		var;
	t_groups	*p1;
	t_groups	*p2;

	var.i = 0;
	while (var.i <= count)
	{
		h = groups;
		init_sort(&var);
		while (var.j < count - var.i - 1)
		{
			p1 = *h;
			p2 = p1->next;
			if (p1->node_nbr > p2->node_nbr)
				*h = ft_swap(p1, p2, &var);
			h = &(*h)->next;
			var.j++;
		}
		var.i++;
		if (var.swapped == 0)
			break ;
	}
}
