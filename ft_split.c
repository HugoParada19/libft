/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:27:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/17 17:11:04 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_dsub(char *s1, char *s2)
{
	char	*ss;

	ss = (char **)ft_calloc(3, sizeof(char));
	if (ss == NULL)
		return (NULL);
	ss[0] = (char *)ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (ss[0] == NULL)
		return (NULL);
	ss[0] = ft_strdup(s1);
	free(s1);
	ss[1] = (char *)ft_calloc(ft_strlen(s2) + 1, sizeof(char));
	if (ss[1] == NULL)
		return (NULL);
	ss[1] = ft_strdup(s2);
	free(s2);
	return (ss);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	*s1;
	char	*s2;

	if (s == NULL)
		return (NULL);
	while (s[i] && s[i] != c)
		i++;
	if (s[i] != c)
		return (NULL);
	s1 = ft_substr(s, 0, i++);
	if (s1 == NULL)
		return (NULL);
	while (s[i])
		i++;
	s2 = ft_substr(s, ft_strlen(s1), i);
	if (s2 == NULL)
		return (NULL);
	return (ft_dsub(s1, s2));
}
