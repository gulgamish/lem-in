/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_infos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 02:30:10 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/15 02:46:35 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_free_room(t_room *room)
{
	t_list	*links_temp;

	free(room->name);
	free(room->cord);
	while (room->links)
	{
		links_temp = room->links;
		room->links = room->links->next;
		free(links_temp);
	}
	free(room);
}

int		ft_free_rooms(t_room *room)
{
	if (!room)
		return (1);
	ft_free_rooms(room->left);
	ft_free_rooms(room->right);
	ft_free_room(room);
	return (0);
}

void	ft_free_infos(t_infos *infos)
{
	ft_free_rooms(infos->rooms);
	free(infos);
}
