/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_from.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:29:21 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/15 19:29:44 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

char	*ft_extract_from(char **line)
{
	char	*str;
	int		i;

	i = 0;
	str = *line;
	while (str[i] != '-')
		i++;
	*line = &str[i + 1];
	return (ft_strsub(str, 0, i));
}
