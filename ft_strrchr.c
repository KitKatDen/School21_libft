/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 10:17:19 by cborton           #+#    #+#             */
/*   Updated: 2020/11/05 12:03:13 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t n;

	n = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + n);
	while (n--)
	{
		if (s[n] == c)
			return ((char *)s + n);
	}
	return (NULL);
}
