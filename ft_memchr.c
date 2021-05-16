/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:39:54 by kursula           #+#    #+#             */
/*   Updated: 2021/04/22 16:40:43 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	t;

	t = (unsigned char)c;
	s1 = (unsigned char *)s;
	i = -1;
	while (++i < n)
		if (s1[i] == t)
			return (&s1[i]);
	return (0);
}
