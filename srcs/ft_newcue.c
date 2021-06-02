/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newcue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 15:54:42 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/15 21:18:49 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_cue	*ft_newcue(t_room *room)
{
	t_cue	*cue;

	if (!(cue = (t_cue *)malloc(sizeof(t_cue))))
		return (NULL);
	cue->room = room;
	cue->next = NULL;
	return (cue);
}
