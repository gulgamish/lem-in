/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orchestrate_ants.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 23:31:52 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 18:48:46 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_balance(t_groups *groups_solve, int *nbr_of_ants)
{
	t_groups	*temp_groups;
	t_groups	*temp_groups_next;

	temp_groups_next = groups_solve;
	while (*nbr_of_ants && temp_groups_next)
	{
		temp_groups = groups_solve;
		temp_groups_next = temp_groups_next->next;
		while (temp_groups_next &&
				temp_groups != temp_groups_next && *nbr_of_ants)
		{
			while (temp_groups->node_nbr != temp_groups_next->node_nbr
					&& nbr_of_ants)
			{
				temp_groups->nbr_ants++;
				*nbr_of_ants = *nbr_of_ants - 1;
				temp_groups->node_nbr++;
			}
			temp_groups = temp_groups->next;
		}
	}
}

void	ft_distribute(t_groups *groups_solve, int *nbr_of_ants)
{
	t_groups *temp_groups;

	while (*nbr_of_ants)
	{
		temp_groups = groups_solve;
		while (temp_groups && *nbr_of_ants)
		{
			temp_groups->nbr_ants++;
			*nbr_of_ants = *nbr_of_ants - 1;
			temp_groups = temp_groups->next;
		}
	}
}

void	ft_orchestrate_ants(t_groups *groups_solve, t_infos *infos)
{
	int			nbr_of_ants;

	nbr_of_ants = infos->nb_of_ants;
	ft_balance(groups_solve, &nbr_of_ants);
	ft_distribute(groups_solve, &nbr_of_ants);
	ft_sendants(groups_solve, infos);
}
