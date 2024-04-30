/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:58:14 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/30 16:18:41 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!del || !lst || !*lst)
		return ;
	while (*lst->next)
	{
		(*del)(lst->content);
		free(*lst);
		*lst = lst->new;
	}
	(*del)(lst->content);
	free(*lst);
	*lst = NULL;
}
