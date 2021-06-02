/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readandfill.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:39:25 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/20 11:34:16 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int		ft_readandfill_norme(char **line, t_infos **infos)
{
	if (!ft_getline(0, line) || !ft_extract_nbrofants(*infos, *line))
	{
		free(*line);
		return (0);
	}
	return (1);
}

int		ft_readandfill(t_infos *infos)
{
	int		state;
	char	*line;

	ft_init_var(infos, &line, &state);
	if (!ft_readandfill_norme(&line, &infos))
		return (0);
	ft_putendl(line);
	free(line);
	while (ft_getline(0, &line))
	{
		ft_putendl(line);
		if (!ft_is_comment(line))
		{
			ft_extract_command(line, &state, infos);
			if (!ft_extractandfill(infos, line, &state))
			{
				free(line);
				return (0);
			}
		}
		free(line);
	}
	if (infos->check_links != 1 || infos->end != 1 || infos->start != 1)
		return (0);
	return (1);
}
