/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:04:05 by cborton           #+#    #+#             */
/*   Updated: 2020/11/04 13:55:20 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ds;
	unsigned char *sr;

	if (dst == src)
		return (dst);
	ds = (unsigned char*)dst;
	sr = (unsigned char*)src;
	if (ds < sr)
		while (len--)
			*ds++ = *sr++;
	else
	{
		ds = ds + (len - 1);
		sr = sr + (len - 1);
		while (len--)
			*ds-- = *sr--;
	}
	return (dst);
}
