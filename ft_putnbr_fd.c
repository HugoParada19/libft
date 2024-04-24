/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:36:49 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/23 19:40:23 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ao(int fd)
{
	ft_putstr_fd("-2", fd);
	return (147483648);
}

static int	ft_intlen(int n)
{
	int	count;

	count = n < 0;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	ncopy;
	int	i;

	if (n == -2147483648)
		n = ft_ao(fd);
	if (!n)
		ft_putchar_fd(48, fd);
	else if (ft_intlen(n) == 1)
		ft_putchar_fd(n + 48, fd);
	else
	{
		i = -1;
		ncopy = 1;
		if (n < 0)
		{
			i++;
			n = -n;
			ft_putchar_fd(45, fd);
		}
		while (++i < ft_intlen(n))
			ncopy *= 10;
		ft_putchar_fd(n / ncopy + 48, fd);
		ft_putnbr_fd(n % ncopy, fd);
	}
}
