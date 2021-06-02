/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clonemap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:45:32 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/05 13:33:30 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_clonemap(char **map)
{
	char	**cmap;
	int		i;

	cmap = (char **)malloc(sizeof(char *) * (ft_countlines(map) + 1));
	i = 0;
	while (map[i])
	{
		cmap[i] = ft_strdup(map[i]);
		i++;
	}
	cmap[i] = NULL;
	return (cmap);
}
