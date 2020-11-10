/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 10:37:19 by cborton           #+#    #+#             */
/*   Updated: 2020/11/10 21:42:16 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	long int		ft_abs(long int n)
{
	if (n < 0)
		return (n * (-1));
	return (n);
}

static	long int		ft_intlen(long int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		len = 1;
		n = ft_abs(n);
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char					*ft_itoa(int n)
{
	size_t	len;
	char	*s;
	long	n_long;

	n_long = (long)n;
	len = ft_intlen(n_long);
	if (!(s = malloc(ft_abs(len) + 1)))
		return (NULL);
	s[len] = '\0';
	if (n_long == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n_long = ft_abs(n_long);
	}
	len = ft_abs(len - 1);
	n_long = ft_abs(n_long);
	while (len >= 0 && n_long != 0)
	{
		s[len] = n_long % 10 + '0';
		n_long = n_long / 10;
		len--;
	}
	return (s);
}
