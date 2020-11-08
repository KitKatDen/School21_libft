/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 14:12:48 by cborton           #+#    #+#             */
/*   Updated: 2020/11/04 14:25:03 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *src;
	unsigned char sym;

	src = (unsigned char*)s;
	sym = (unsigned char)c;
	while (n--)
	{
		if (*src == sym)
			return (src);
		src++;
	}
	return (NULL);
}
