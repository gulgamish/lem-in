/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_var.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:38:02 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/19 18:34:17 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_init_var(t_infos *infos, char **line, int *state)
{
	infos->start = 0;
	infos->end = 0;
	*line = NULL;
	*state = NONE;
}
