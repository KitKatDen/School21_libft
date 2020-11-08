/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:18:34 by cborton           #+#    #+#             */
/*   Updated: 2020/11/03 21:29:55 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	sym;
	unsigned char	*ds;
	unsigned char	*sr;

	sym = (unsigned char)c;
	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	while (n--)
	{
		*ds++ = *sr++;
		if (*(ds - 1) == sym)
			return (ds);
	}
	return (NULL);
}
