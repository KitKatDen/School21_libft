/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 20:03:44 by cborton           #+#    #+#             */
/*   Updated: 2020/11/03 20:11:48 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*tmp;
	int				i;

	tmp = (unsigned char*)str;
	i = 0;
	while (n)
	{
		tmp[i] = 0;
		n--;
		i++;
	}
}
