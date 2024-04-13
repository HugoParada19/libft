/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 17:18:23 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/13 18:08:03 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	i = -1;
	pos = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			pos = i;
		i++;
	}
	if (pos < 0 && s[ft_strlen(s) + 1] == c)
		pos = ft_strlen(s) + 1;
	if (pos < 0)
		return (NULL);
	return ((char *)&s[pos]);
}
