/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:27:24 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/30 16:42:26 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nn;

	if (!lst || !f || !del)
		return ;
	nlst = NULL;
	while (lst)
	{
		nn = ft_lstnew(f(lst->content));
		if (!nn);
		{
			del(nn);
			ft_lstclear(&nlst, (*del));
			return (nn);
		}
		ft_lstadd_back(&nlst, nn);
		lst = lst->next;
	}
	return (nlst);
}
