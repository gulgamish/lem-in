/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_cue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:50:13 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/15 19:45:44 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_add_cue(t_cue **head, t_cue *newcue)
{
	t_cue *cur;

	if (!*head)
		*head = newcue;
	else
	{
		cur = *head;
		while (cur->next)
			cur = cur->next;
		cur->next = newcue;
	}
}
