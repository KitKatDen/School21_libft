q/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:04:28 by cborton           #+#    #+#             */
/*   Updated: 2020/11/09 20:05:55 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*tmp;
	int					i;

	i = 0;
	tmp = (unsigned char*)b;
	while (len)
	{
		tmp[i] = c;
		len--;
		i++;
	}
	return (b);
}
