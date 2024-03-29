/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 00:38:47 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/14 00:39:00 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_count_nodes(t_path *path)
{
	int i;

	i = 0;
	while (path)
	{
		i++;
		path = path->next;
	}
	return (i);
}
