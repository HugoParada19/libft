/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:02:13 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/16 23:41:56 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	s;
	size_t	e;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	e = ft_strlen(set);
	while (s1[s] && ft_char_in_set(s1[s], set))
		s++;
	while (e > s && ft_char_in_set(s1[e], set))
		e--;
	str = malloc(sizeof(char) * (e - s + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcat(str, s1 + s, e - s);
	return (str);
}
