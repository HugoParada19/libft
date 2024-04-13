/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:49:55 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/12 15:04:25 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*td;
	unsigned char	*ts;

	if (!n || dest == src)
		return (dest);
	td = dest;
	ts = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		td[i] = ts[i];
		i++;
	}
	return (dest);
}
