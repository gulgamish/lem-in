/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newroom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 00:55:14 by aelamran          #+#    #+#             */
/*   Updated: 2019/12/15 15:44:18 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room	*ft_newroom(char *name, t_cord *cord, int state)
{
	t_room *newroom;

	if (!(newroom = (t_room *)malloc(sizeof(t_room))))
		return (NULL);
	newroom->name = name;
	newroom->cord = cord;
	newroom->state = state;
	newroom->links = NULL;
	newroom->previous = NULL;
	newroom->visited = 0;
	newroom->blocked = 0;
	newroom->flow = 0;
	newroom->ants = 0;
	newroom->left = NULL;
	newroom->right = NULL;
	return (newroom);
}
