/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_group.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:55:52 by aelamran          #+#    #+#             */
/*   Updated: 2019/12/17 17:27:11 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_add_group(t_groups **groups, t_groups *newgroup)
{
	t_groups *temp;

	if (!*groups)
		*groups = newgroup;
	else
	{
		temp = *groups;
		while (temp->next)
			temp = temp->next;
		temp->next = newgroup;
	}
}
