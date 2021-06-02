/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newpath.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:37:13 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/16 21:33:28 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_path	*ft_newpath(t_room *room)
{
	t_path	*newpath;

	if (!(newpath = (t_path *)malloc(sizeof(t_path))))
		return (NULL);
	newpath->room = room;
	newpath->next = NULL;
	return (newpath);
}
