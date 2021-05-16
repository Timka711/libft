/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:31:54 by kursula           #+#    #+#             */
/*   Updated: 2021/05/07 16:45:17 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *a, int n)
{
	int				i;
	int				res;
	unsigned char	c;

	c = (unsigned char)n;
	res = -1;
	i = 0;
	while (a[i] != 0)
	{
		if (a[i] == c)
			res = i;
		i++;
	}
	if (a[i] == c)
		return (&((char *)a)[i]);
	if (res == -1)
		return (0);
	else
		return (&((char *)a)[res]);
}
