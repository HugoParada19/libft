/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:29:09 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/16 21:59:29 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size == INT_MAX)
		return (NULL);
	mem = malloc(size * nmemb);
	ft_bzero(mem, nmemb);
	return (mem);
}
