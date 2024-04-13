/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:23:09 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/13 14:15:37 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;

	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	if (ld >= size)
		return (size + ls);
	if (ls + ld < size)
		ft_memcpy (dst + ld, src, size);
	else
		ft_memcpy (dst + ld, src, size - ld - 1);
	dst[size - 1] = 0;
	return (ld + ls);
}
