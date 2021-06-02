/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:51:16 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/13 21:51:30 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_reset(t_room *room)
{
	if (room)
	{
		ft_reset(room->left);
		room->blocked = 0;
		room->visited = 0;
		room->previous = NULL;
		ft_reset(room->right);
	}
}
