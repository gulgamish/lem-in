/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 18:07:11 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/20 13:43:36 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int	main(void)
{
	t_infos	*infos;

	if (!(infos = (t_infos *)malloc(sizeof(t_infos))))
		return (0);
	infos->rooms = NULL;
	infos->start_room = NULL;
	infos->end_room = NULL;
	if (!ft_readandfill(infos) || !infos->start_room || !infos->end_room ||
		!ft_is_there_path(infos->start_room))
	{
		write(1, "ERROR\n", 6);
		ft_free_infos(infos);
		return (0);
	}
	ft_reset(infos->rooms);
	ft_putendl("");
	ft_paths(infos);
	ft_free_infos(infos);
	return (0);
}
