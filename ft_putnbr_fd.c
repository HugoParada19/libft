/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:36:49 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/22 15:14:25 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	int	len;
	int	ncopy;
	int	i;

	len = ft_intlen(n);
	if (!len)
		write(fd, 48, 1);
	else
	{
		ncopy = n;
		i = -1;
		while (++i < len)
			ncopy *= 10;
		n /= ncopy;
		write(fd, n + 48, 1);
		ft_putnbr_fd(n, fd);
	}
}
