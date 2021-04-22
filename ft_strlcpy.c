/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 21:36:48 by kursula           #+#    #+#             */
/*   Updated: 2021/04/22 16:33:01 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *restrict buf, const char *restrict a, size_t n)
{
	size_t	i;

	i = -1;
	while (a[i] != '\0')
		if (i < n - 1)
			buf[i] = a[i];
	buf[n - 1] = '\0';
	return (i);
}
