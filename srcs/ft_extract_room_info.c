/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_room_info.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:31:45 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/15 19:32:10 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int	ft_extract_room_info(t_infos *infos, int state, char *line)
{
	char	*room_name;
	t_cord	*room_cord;

	if (!(room_name = ft_extract_room_name(&line)))
		return (0);
	if (ft_search_room(room_name, infos->rooms))
		return (0);
	if (!(room_cord = ft_extract_room_cord(line)))
		return (0);
	if (state == START)
	{
		infos->start_room = ft_newroom(room_name, room_cord, state);
		ft_add_room(&infos->rooms, infos->start_room);
	}
	else if (state == END)
	{
		infos->end_room = ft_newroom(room_name, room_cord, state);
		ft_add_room(&infos->rooms, infos->end_room);
	}
	else
		ft_add_room(&infos->rooms, ft_newroom(room_name, room_cord, state));
	return (1);
}
