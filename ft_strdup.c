/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:33:21 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/13 16:05:47 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sc;

	sc = malloc(sizeof(char) * ft_strlen(s) + 1);
	ft_strlcpy(sc, s, ft_strlen(s) + 1);
	return (sc);
}
