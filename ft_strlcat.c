/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:54:35 by cborton           #+#    #+#             */
/*   Updated: 2020/11/05 10:14:17 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		cpy_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	dst += dst_len;
	size -= dst_len;
	if (src_len >= size)
		cpy_len = size - 1;
	else
		cpy_len = src_len;
	ft_memcpy(dst, src, cpy_len);
	*(dst + cpy_len) = 0;
	return (dst_len + src_len);
}
