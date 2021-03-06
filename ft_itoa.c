/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 13:18:45 by kursula           #+#    #+#             */
/*   Updated: 2021/05/15 13:24:37 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	arr_len(int n)
{
	int	size;

	size = 1;
	if (n < 0)
		size++;
	while (n / 10)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int s)
{
	int		i;
	char	*res;
	int		z;

	i = arr_len(s);
	z = 1;
	res = (char *)malloc(i + 1);
	if (!res)
		return (0);
	res[i--] = 0;
	res[i] = '0';
	if (s < 0)
	{
		res[0] = '-';
		z = -1;
	}
	while (s)
	{
		res[i] = (s % 10) * z + '0';
		s = s / 10;
		i--;
	}
	return (res);
}
