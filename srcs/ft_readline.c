/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:28:40 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 18:22:57 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_getline_norme(int size, char *str, char **line)
{
	if (size == -1)
		return (-1);
	if (str == NULL)
		return (0);
	*line = str;
	return (1);
}

int		ft_getline(int fd, char **line)
{
	char	buff[2];
	char	*str;
	char	*to_del;
	ssize_t	size;

	buff[1] = 0;
	str = NULL;
	while ((size = read(fd, buff, 1)) > 0)
	{
		if (buff[0] == '\n')
			break ;
		if (str == NULL)
			str = ft_strnew(0);
		to_del = str;
		str = ft_strjoin(str, buff);
		free(to_del);
	}
	return (ft_getline_norme(size, str, line));
}
