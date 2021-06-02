/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isroom.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:24:16 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/19 21:43:04 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_free_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

int		ft_isroom(char *line)
{
	char	**tab;
	int		i;

	if (ft_strchr(line, '-') || line[0] == '#')
		return (0);
	if (!ft_isalpha(line[0]))
		if (!ft_isdigit(line[0]))
			return (0);
	tab = ft_strsplit(line, ' ');
	i = 0;
	while (tab[i])
		i++;
	if (i != 3 || tab[0][0] == 'L')
	{
		ft_free_tab(tab);
		return (-1);
	}
	ft_free_tab(tab);
	return (1);
}
