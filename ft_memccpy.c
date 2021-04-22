/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 20:31:05 by kursula           #+#    #+#             */
/*   Updated: 2021/04/22 19:33:17 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s1)[i] = ((char *)s2)[i];
		if (((char *)s2)[i] == c)
			return (&((char *)s1)[i + 1]);
		i++;
	}
	return (0);
}
