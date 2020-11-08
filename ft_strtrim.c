/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cborton <cborton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:48:11 by cborton           #+#    #+#             */
/*   Updated: 2020/11/06 17:08:36 by cborton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	buff;
	char	*str;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	buff = i;
	while (s1[i] != '\0')
		i++;
	i--;
	while (i > buff && ft_strchr(set, s1[i]))
		i--;
	if (!(str = ft_substr(s1, buff, i - buff + 1)))
		return (NULL);
	return (str);
}
