/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 18:20:13 by kursula           #+#    #+#             */
/*   Updated: 2021/04/21 17:40:50 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	i;
	char	*s3;
	char	*s4;

	i = 0;
	s3 = (char *)s1;
	s4 = (char *)s2;
	while (s3[i] == s4[i])
		if (i++ > n)
			break ;
	return (s3[i] - s4[i]);
}
