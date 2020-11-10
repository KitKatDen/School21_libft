/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:49:34 by cborton           #+#    #+#             */
/*   Updated: 2020/11/10 19:45:01 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;

	needle_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		if (*haystack == *needle && !(ft_memcmp(haystack, needle, needle_len)))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
