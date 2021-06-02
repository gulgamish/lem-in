/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_room_name.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:26:20 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/15 19:27:13 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

char	*ft_extract_room_name(char **line)
{
	int		i;
	char	*str;

	str = *line;
	i = 0;
	while (str[i] != ' ')
		i++;
	*line = &str[i + 1];
	return (ft_strsub(str, 0, i));
}
