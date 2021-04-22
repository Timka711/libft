/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:20:13 by kursula           #+#    #+#             */
/*   Updated: 2021/04/22 20:20:47 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s1)[i] == ((char *)s2)[i])
		if (i++ > n)
			break ;
	return (((char *)s1)[i] - ((char *)s2)[i]);
}
