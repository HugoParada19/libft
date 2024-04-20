/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:13:47 by htrindad          #+#    #+#             */
/*   Updated: 2024/04/20 19:15:53 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n)
	{
		i++;
		n /= 10;
	}
	printf("%d\n", i);
	return (i);
}

static int	ft_remove_left(int n)
{
	int	div;

	div = 1;
	if (n < 0)
		n = -n;
	while (n / div >= 10)
		div *= 10;
	return (n % div);
}

static void	*itoa_aux(char *num, int len, int n, int t)
{
	int	tn;
	int	tl;
	int	i;

	if (n < 0)
	{
		++t;
		n = -n;
	}
	tn = n;
	tl = len;
	i = -1;
	if (t < len)
	{
		printf("%d", tl);
		while (++i < len)
			tl *= 10;
		tn /= tl;
		printf("%d\n", tn);
		num[t] = tn + 48;
		return (itoa_aux(num, len, ft_remove_left(n), ++t));
	}
	return (num);
}

static char	*ft_finaltouches(int n, int msize)
{
	char	*num;

	num = malloc(sizeof(char) * (msize + 1));
	if (!num)
		return (NULL);
	if (n < 0)
		num[0] = '-';
	itoa_aux(num, msize, n, 0);
	return (num);
}

char	*ft_itoa(int n)
{
	int		msize;
	char	*num;

	msize = ft_intlen(n);
	if (!msize)
	{
		num = malloc(sizeof(int) * 2);
		if (!num)
			return (NULL);
		num[0] = n + 48;
		return (num);
	}
	return (ft_finaltouches(n, msize));
}

int main()
{
	char *num = ft_itoa(453);

	for(size_t i = 0; i <= ft_strlen(num); i++)
		printf("%d\n", num[i]);
}
