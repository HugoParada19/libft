/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:45:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/16 20:14:38 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	new_str = ft_strdup(s1);
	if (new_str == NULL)
		return (NULL);
	ft_strlcat(new_str, s2, ft_strlen(s2));
	return (new_str);
}
