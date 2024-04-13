/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 12:23:09 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/13 12:53:42 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ls;
	size_t	ld;

	ls = ft_strlen(src);
	ld = ft_strlen(dst);
	if (ld >= size)
		return (size + ls);
	if (ls + ld < size)
		ft_memcpy(dst + ld, src, ls + 1);
	else
		dst[ld - 1] = 0;
	return (ld + ls);
}

void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

int main()
{
	char *dest;

	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[14] = 'a';
	ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
	write(1, "\n", 1);
	write(1, dest, 15);
}
