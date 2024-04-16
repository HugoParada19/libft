/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:29:09 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/16 16:54:23 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	i;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size == INT_MAX)
		return (NULL);
	i = 0;
	mem = malloc(size * nmemb);
	ft_bzero(mem, nmemb);
	return (mem);
}
