/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_room_cord.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:27:58 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/15 19:28:50 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_cord	*ft_extract_room_cord(char *line)
{
	int		i;
	t_cord	*cord;

	i = 0;
	while (line[i])
	{
		while (line[i] && line[i] == ' ')
			i++;
		if (!ft_isdigit(line[i]))
			return (NULL);
		i++;
	}
	if (!(cord = (t_cord *)malloc(sizeof(t_cord))))
		return (NULL);
	cord->x = ft_atoi(line);
	while (*line && ft_isdigit(*line))
		line++;
	while (*line && *line == ' ')
		line++;
	cord->y = ft_atoi(line);
	return (cord);
}
