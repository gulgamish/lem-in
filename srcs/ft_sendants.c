/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sendants.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 22:52:45 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 15:47:41 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_print_movement(int id, char *room_name)
{
	write(1, "L", 1);
	ft_putnbr(id);
	write(1, "-", 1);
	write(1, room_name, ft_strlen(room_name));
	write(1, " ", 1);
}

void	ft_execute_instruction(t_ant *ants, int n, t_room *room_end)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (ants[i].path)
		{
			if (ants[i].path->room == room_end)
				room_end->ants++;
			ft_print_movement(i + 1, ants[i].path->room->name);
			ants[i].path = ants[i].path->next;
		}
		i++;
	}
	ft_putendl("");
}

void	ft_assign_paths_to_ants(t_groups *group_solve, t_ant *ants, int *i)
{
	while (group_solve)
	{
		if (group_solve->nbr_ants > 0)
		{
			ants[*i].path = group_solve->path;
			group_solve->nbr_ants--;
			*i = *i + 1;
		}
		group_solve = group_solve->next;
	}
}

void	ft_sendants(t_groups *groups_solve, t_infos *infos)
{
	t_ant		*ants;
	int			i;

	i = 0;
	if (!(ants = (t_ant *)malloc(sizeof(t_ant) * infos->nb_of_ants)))
		return ;
	while (i < infos->nb_of_ants)
	{
		ants[i].path = NULL;
		i++;
	}
	i = 0;
	while (infos->end_room->ants != infos->nb_of_ants)
	{
		ft_assign_paths_to_ants(groups_solve, ants, &i);
		ft_execute_instruction(ants, infos->nb_of_ants, infos->end_room);
	}
	free(ants);
}
