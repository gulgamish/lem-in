/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_nbrofants.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azineddi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 19:32:48 by azineddi          #+#    #+#             */
/*   Updated: 2020/01/15 19:33:27 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int	ft_extract_nbrofants(t_infos *infos, char *line)
{
	if (!ft_check_extractnbrants(line, infos))
		return (0);
	return (1);
}
