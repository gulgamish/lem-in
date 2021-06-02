/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_graph_info.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 15:37:05 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/19 15:46:39 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_print_graph_info(t_list *buff)
{
	while (buff)
	{
		ft_putendl(buff->content);
		buff = buff->next;
	}
}
