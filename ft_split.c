/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:53:46 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/20 16:53:32 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countc(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c && *s)
				s++;
			if (*s)
				count++;
		}
		else
			s++;
	}
	return (count);
}

static uint8_t	ft_stringate(char **ss, char const *s, char c)
{
	size_t	x;
	size_t	y;
	size_t	z;

	x = 0;
	y = 0;
	z = 0;
	while (s[x])
	{
		if (s[x] == c)
			x++;
		else
		{
			y = x;
			while (s[y] && s[y] != c)
				y++;
			ss[z++] = ft_substr(s, x, y - x);
			if (!ss[z - 1])
				return (0);
			x = y;
		}
	}
	return (1);
}

static void	*ft_nullify(char **ss, size_t count)
{
	while (count--)
		free(ss[count]);
	free(ss);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**ss;

	if (s == NULL)
		return (NULL);
	count = ft_countc(s, c);
	ss = malloc((count + 1) * sizeof(char *));
	if (!ss)
		return (NULL);
	ss[count] = NULL;
	if (!ft_stringate(ss, s, c))
		return (ft_nullify(ss, count));
	return (ss);
}
