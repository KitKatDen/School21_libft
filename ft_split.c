/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:38:18 by cborton           #+#    #+#             */
/*   Updated: 2020/11/08 15:38:02 by cborton          ###   ########.fr       */
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

static int get_len_str(char const *s, char c, int str_id)
{
	int n;

	n = 0;
	while (s[str_id] && s[str_id] == c)
		str_id++;
	while (s[str_id] && s[str_id] != c)
	{
		str_id++;
		n++;
	}
	return (n + 1);
}

static char **ft_another_function(char const *s, char c, char **res)
{
	int str_id;
	int len_str;
	int	i;

	str_id = 0;
	i = 0;
	while (s[str_id])
	{
		len_str = get_len_str(s, c, str_id);
		if (!(res[i] = (char *)malloc(sizeof(char) * n)))
		{
			while (i)
				free(res[i -=1]);
			free(res);
			return(NULL);
		}
	}
	
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		n;

	// res[0] = "ANS";
	// res[1] = "WER";
	
	if (!s)
		return (NULL);
	n = numb_str(s, c) + 1;
	res = (char **)malloc(sizeof(char *) * n);
	if (!res)
		return (NULL);
	res[n - 1] = NULL;
	if (n == 1)
		return(res);
	res = ft_another_function(s, c, res)
	return (res);
}

int		main(void)
{
	char const *s = "DenisVDenisVDenis";
	char c = 'V';

	printf("%i\n", numb_str(s, c));
}