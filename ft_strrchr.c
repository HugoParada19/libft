/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:18:23 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/15 20:25:01 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!c)
		return ((char *)&s[ft_strlen(s) + 1]);
	i = ft_strlen(s);
	while (i && s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
