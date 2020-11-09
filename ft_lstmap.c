/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:53:27 by cborton           #+#    #+#             */
/*   Updated: 2020/11/09 20:00:25 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *r;
	t_list *n;

	r = NULL;
	if (f)
	{
		while (lst)
		{
			n = ft_lstnew((*f)(lst->content));
			if (!n)
			{
				ft_lstclear(&r, del);
				return (r);
			}
			ft_lstadd_back(&r, n);
			lst = lst->next;
		}
	}
	return (r);
}
