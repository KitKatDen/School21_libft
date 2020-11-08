/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:26:39 by cborton           #+#    #+#             */
/*   Updated: 2020/11/04 14:46:49 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *ds;
	unsigned char *sr;

	if (dst == NULL && src == NULL)
		return (NULL);
	ds = (unsigned char*)dst;
	sr = (unsigned char*)src;
	while (n--)
		*ds++ = *sr++;
	return (dst);
}
