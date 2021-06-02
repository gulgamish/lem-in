/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extractnbrants.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:17:24 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/15 19:56:10 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int	ft_check_extractnbrants(char *line, t_infos *infos)
{
	int i;

	if (ft_strlen(line) > 9)
		return (0);
	i = 0;
	while (line[i])
	{
		if (!ft_isdigit(line[i]))
			return (0);
		i++;
	}
	if (!(infos->nb_of_ants = ft_atoi(line)))
		return (0);
	return (1);
}
