/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:49:30 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/18 20:47:07 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fnn(char **ss)
{
	free(ss);
	return (NULL);
}

static char	**count_words(char const *s, char c)
{
	int		x;
	size_t	count;
	char	**ss;
	size_t	i;

	x = 1;
	count = 0;
	while (*s)
	{
		if (*s == c && !x)
			x = 1;
		else if (x)
		{
			count++;
			x = 0;
		}
		s++;
	}
	ss = malloc(sizeof(char *) * count + 1);
	if (!ss)
		return (NULL);
	i = 0;
	/*while (i < count)
	{
		ss[i] = malloc(sizeof(char));
		i++;
	}*/
}

char	**ft_split(char const *s, char c)
{
	char	**ss;

	if (s == NULL)
		return (NULL);
}
