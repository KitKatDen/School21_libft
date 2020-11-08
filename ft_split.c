/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 14:38:18 by cborton           #+#    #+#             */
/*   Updated: 2020/11/08 20:45:10 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int			ft_get_amount_of_str(const char *s, const char c)
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
	return (n);
}

static int	ft_get_len_str(char const *s, char c, int str_id)
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
	return (n);
}

static void	ft_add_str(char *str, const char *s, int *s_char_id, char c)
{
	int last_id_of_str_OR_str_len;

	last_id_of_str_OR_str_len = 0;
	while (s[*s_char_id] && s[*s_char_id] == c)
		*s_char_id = *s_char_id + 1;
	while (s[*s_char_id] && s[*s_char_id] != c)
	{
		str[last_id_of_str_OR_str_len] = s[*s_char_id];
		last_id_of_str_OR_str_len++;
		*s_char_id = *s_char_id + 1;
	}
	*s_char_id = *s_char_id - 1;
	str[last_id_of_str_OR_str_len] = '\0';
}

static char	**ft_core(char const *s, char c, char **res)
{
	int s_char_id;
	int str_len;
	int	mas_s_id;

	s_char_id = 0;
	mas_s_id = 0;
	while (s[s_char_id])
	{
		str_len = ft_get_len_str(s, c, s_char_id);
		if (str_len != 0)
		{
			if (!(res[mas_s_id] = (char *)malloc(sizeof(char) * (str_len + 1))))
			{
				while (mas_s_id)
					free(res[mas_s_id = mas_s_id - 1]);
				free(res);
				return (NULL);
			}
			ft_add_str(res[mas_s_id], s, &s_char_id, c);
		}
		s_char_id = s_char_id + 1;
		mas_s_id = mas_s_id + 1;
	}
	return (res);
}

char		**ft_split(char const *s, char c)
{
	char	**res;
	int		amount_of_str;

	if (!s)
		return (NULL);
	amount_of_str = ft_get_amount_of_str(s, c) + 1;
	res = (char **)malloc(sizeof(char *) * amount_of_str);
	if (!res)
		return (NULL);
	res[amount_of_str - 1] = NULL;
	if (amount_of_str == 1)
		return (res);
	res = ft_core(s, c, res);
	return (res);
}
