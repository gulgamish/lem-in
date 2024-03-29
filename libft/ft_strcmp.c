/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 15:13:56 by aelamran          #+#    #+#             */
/*   Updated: 2019/11/21 19:40:33 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int	chr;

	while (*s1 || *s2)
	{
		if ((chr = ((unsigned char)*s1 - (unsigned char)*s2)) != 0)
			return (chr);
		s1++;
		s2++;
	}
	return (0);
}
