/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:55:46 by kursula           #+#    #+#             */
/*   Updated: 2021/04/22 16:43:40 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = -1;
	if (s2 == 0 || s2[0] == '\0')
		return ((char *)s1);
	while (++i < n)
		if (s1[i] == s2[i])
			return ((char *)s1 + i);
	return (0);
}
