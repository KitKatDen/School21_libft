/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 16:31:29 by cborton           #+#    #+#             */
/*   Updated: 2020/11/04 18:20:36 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_space(const char *sp)
{
	if (*sp == ' ' || *sp == '\t'
		|| *sp == '\n' || *sp == '\v'
		|| *sp == '\f' || *sp == '\r')
		return (1);
	else
		return (0);
}

int		ft_atoi(const char *str)
{
	int				m;
	long int		res;

	res = 0;
	m = 1;
	while (is_space(str))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			m = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (res > 2147483647 && m == 1)
			return (-1);
		if (res >= 2147483648 && m == -1)
			return (0);
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * m);
}
