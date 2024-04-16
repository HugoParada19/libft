/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:15:41 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/16 12:24:55 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	car;

	i = 0;
	str = (unsigned char *)s;
	car = (unsigned char)c;
	while (i < n - 1 && str[i] != car)
		i++;
	if (str[i] == car)
		return (&str[i]);
	return (NULL);
}
