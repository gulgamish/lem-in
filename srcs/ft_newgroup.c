/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newgroup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:55:09 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 16:02:10 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_groups	*ft_newgroup(t_path *path, int node_nbr)
{
	t_groups	*newgroup;

	if (!(newgroup = (t_groups *)malloc(sizeof(t_groups))))
		return (NULL);
	newgroup->path = path;
	newgroup->node_nbr = node_nbr;
	newgroup->nbr_ants = 0;
	newgroup->next = NULL;
	return (newgroup);
}
