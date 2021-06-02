/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_link_info.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:30:31 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/16 15:35:42 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_free_strs(char *from, char *to)
{
	if (from)
		free(from);
	if (to)
		free(to);
}

int		ft_extract_link_info(t_infos *infos, char *line)
{
	char	*from;
	char	*to;
	t_room	*room_from;
	t_room	*room_to;

	from = ft_extract_from(&line);
	to = ft_strdup(line);
	if (!(room_from = ft_search_room(from, infos->rooms)))
	{
		ft_free_strs(from, to);
		return (0);
	}
	if (!(room_to = ft_search_room(to, infos->rooms)))
	{
		ft_free_strs(from, to);
		return (0);
	}
	ft_lst_addlast(&room_from->links, ft_lstnew(room_to, sizeof(room_to)));
	ft_lst_addlast(&room_to->links, ft_lstnew(room_from, sizeof(room_from)));
	ft_free_strs(from, to);
	return (1);
}
