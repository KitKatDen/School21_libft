/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:04:28 by cborton           #+#    #+#             */
/*   Updated: 2020/11/03 20:08:39 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char		*tmp;
	int					i;

	i = 0;
	tmp = (unsigned char*)dest;
	while (n)
	{
		tmp[i] = c;
		n--;
		i++;
	}
	return (dest);
}
