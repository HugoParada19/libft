/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:03:34 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/19 16:15:23 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordc(char const *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		if (*s == c && *s)
		{
			while (*s == c && *s)
				s++;
		}
		else
		{
			while (*s != c && *s)
				s++;
			count++;
		}
	}
	return (count);
}

static void	ft_end(char const *s, char c, char **ss)
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
			x = y;
		}
	}
}

static void	ft_free(char **ss, size_t count)
{
	while (count)
		free(ss[count--]);
	free(ss);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**ss;

	if (s == NULL)
		return (NULL);
	count = ft_wordc(s, c);
	ss = malloc(sizeof(char *) * (count + 1));
	if (ss == NULL)
	{
		ft_free(ss, count);
		return (NULL);
	}
	ft_end(s, c, ss);
	return (ss);
}
/*
int main()
{
	char **ss;

	ss = ft_split("", ' ');
	for (size_t i = 0; i <= ft_wordc("", ' '); i++)
		printf("%s\n", ss[i]);
}*/
