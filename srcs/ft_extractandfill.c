/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extractandfill.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:34:07 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/19 22:17:56 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int	ft_extractandfill(t_infos *infos, char *line, int *state)
{
	int	ret;

	if ((ret = ft_isroom(line)) == 1)
	{
		if (!ft_extract_room_info(infos, *state, line))
			return (0);
		*state = NONE;
	}
	else if (ret == -1)
		return (0);
	if (ft_strchr(line, '-'))
	{
		infos->check_links = 1;
		if (!ft_extract_link_info(infos, line))
			return (0);
	}
	return (1);
}
