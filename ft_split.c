/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:38:18 by cborton           #+#    #+#             */
/*   Updated: 2020/11/08 15:06:49 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		numb_str(const char *s, const char c)
{
	int n;

	n = 0;

	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != '\0' && *s != c)
				s++;
			s--;
			n++;
		}
		s++;
	}
	return(n);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		n;

	// res[0] = "ANS";
	// res[1] = "WER";
	
	if (!s)
		return (NULL);
	n = numb_str(s, c);
	return (res);
}

int		main(void)
{
	char const *s = "DenisVDenisVDenis";
	char c = 'V';

	printf("%i\n", numb_str(s, c));
}