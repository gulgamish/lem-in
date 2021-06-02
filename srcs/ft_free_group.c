/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_group.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:44:59 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 15:50:50 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_free_group(t_groups *group)
{
	t_groups	*group_tmp;
	t_path		*path_tmp;

	while (group)
	{
		group_tmp = group;
		while (group->path)
		{
			path_tmp = group->path;
			group->path = group->path->next;
			free(path_tmp);
		}
		group = group->next;
		free(group_tmp);
	}
}
