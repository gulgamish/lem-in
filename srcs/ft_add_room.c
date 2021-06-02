/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_room.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 15:49:04 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/20 15:57:28 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_add_room(t_room **head, t_room *newroom)
{
	if (!*head)
		*head = newroom;
	else
	{
		if (ft_strcmp((*head)->name, newroom->name) < 0)
			ft_add_room(&(*head)->left, newroom);
		else
			ft_add_room(&(*head)->right, newroom);
	}
}
