/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_room_bystate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 19:41:27 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/22 19:25:54 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*ft_search_room_bystate(int state, t_room *head)
{
	t_room *room;

	if (!head)
		return (NULL);
	if (head->state == state)
		return (head);
	else
	{
		if ((room = ft_search_room_bystate(state, head->left)))
			return (room);
		if ((room = ft_search_room_bystate(state, head->right)))
			return (room);
	}
	return (NULL);
}
