/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:04:18 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/20 16:20:05 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	ret = ft_calloc(len + 1, sizeof(char));
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, s + start, len);
	return (ret);
}
