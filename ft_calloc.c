/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:11:38 by cborton           #+#    #+#             */
/*   Updated: 2020/11/05 12:19:02 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *m;

	m = malloc(count * size);
	if (m == NULL)
		return (NULL);
	else
	{
		ft_bzero(m, size * count);
		return (m);
	}
}
