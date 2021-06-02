/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 22:14:25 by aelamran          #+#    #+#             */
/*   Updated: 2020/01/19 16:50:30 by azineddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, int (*del)(void *, size_t))
{
	t_list *list;

	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		list = *alst;
		*alst = (*alst)->next;
		free(list);
	}
	*alst = NULL;
}
