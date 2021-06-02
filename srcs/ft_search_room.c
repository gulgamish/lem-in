/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_room.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 18:12:18 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/26 16:02:54 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*ft_search_room(char *tofind, t_room *head)
{
	t_room *room;

	if (!head)
		return (NULL);
	if (ft_strcmp(head->name, tofind) == 0)
		return (head);
	else
	{
		if (ft_strcmp(head->name, tofind) < 0)
		{
			if ((room = ft_search_room(tofind, head->left)))
				return (room);
		}
		else
		{
			if ((room = ft_search_room(tofind, head->right)))
				return (room);
		}
	}
	return (NULL);
}
