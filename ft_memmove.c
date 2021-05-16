/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:08:57 by kursula           #+#    #+#             */
/*   Updated: 2021/05/07 16:41:56 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = n;
	if (s1 > s2)
	{
		while (--n >= 0 && n <= i)
			((char *)s1)[n] = ((char *)s2)[n];
		return (s1);
	}
	else
		return (ft_memcpy(s1, s2, n));
}
