/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelamran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 21:07:54 by aelamran          #+#    #+#             */
/*   Updated: 2019/09/24 12:44:54 by aelamran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	if (!(list = (t_list *)ft_memalloc(sizeof(t_list))))
		return (NULL);
	if (list)
	{
		if (content)
		{
			list->content = (void *)content;
			list->content_size = content_size;
		}
		return (list);
	}
	return (NULL);
}
