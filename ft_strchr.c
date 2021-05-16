/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:40:27 by kursula           #+#    #+#             */
/*   Updated: 2021/05/07 18:05:37 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *a, int n)
{
	int				i;
	char			*b;
	unsigned char	c;

	c = (unsigned char)n;
	b = (char *)a;
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == c)
			return (&b[i]);
		i++;
	}
	if (b[i] == c)
		return (&b[i]);
	return (0);
}
