/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_command.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:21:26 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/19 20:46:29 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_extract_command(char *line, int *state, t_infos *infos)
{
	while (*line)
	{
		if (*line == '#')
		{
			if (*(line + 1) == '#')
			{
				if (ft_strcmp((line + 2), "start") == 0)
				{
					infos->start++;
					*state = START;
				}
				else if (ft_strcmp((line + 2), "end") == 0)
				{
					infos->end++;
					*state = END;
				}
			}
		}
		line++;
	}
}
