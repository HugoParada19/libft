/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:49:30 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/19 14:12:02 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **ptr, size_t count)
{
	while (count)
		free(ptr[count--]);
	free(ptr);
}

static size_t	ft_countc(char const *s, char c)
{
	size_t		count;
	u_int8_t	once;

	count = 0;
	once = 0;
	while (*s)
	{
		if (*s == c && !once)
		{
			count++;
			once = 1;
		}
		if (*s != c && once)
			once = 0;
		s++;
	}
	return (count);
}

static size_t	ft_fp(char const *s, char c, size_t count)
{
	size_t	i;

	i = 0;
	while (count)
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (i);
}

static char	**ft_create_arr(char const *s, char c, char **ss, size_t con)
{
	size_t	i;

	i = 0;
	while (i < con)
		ss[i++] = ft_substr(s, ft_fp(s, c, con - 1), ft_fp(s, c, con));
	return (ss);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**ss;

	if (!s)
		return (NULL);
	count = ft_countc(s, c);
	ss = malloc(sizeof(char *) * (count + 1));
	if (ss == NULL)
	{
		ft_free(ss, count);
		return (NULL);
	}
	return (ft_create_arr(s, c, ss, count));
}
