/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_cue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 23:07:53 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 15:42:37 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_free_cue(t_cue *cue)
{
	t_cue *cue_tmp;

	while (cue)
	{
		cue_tmp = cue;
		cue = cue->next;
		free(cue_tmp);
	}
}
