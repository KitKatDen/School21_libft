/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 18:41:53 by cborton           #+#    #+#             */
/*   Updated: 2020/11/09 20:11:43 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	t_list *start;

	start = *lst;
	while (start)
	{
		tmp = start->next;
		if (del)
			del(start->content);
		free(start);
		start = tmp;
	}
	*lst = NULL;
}
