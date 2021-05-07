/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 21:36:48 by kursula           #+#    #+#             */
/*   Updated: 2021/05/06 17:42:59 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *restrict buf, const char *restrict a, size_t n)
{
	size_t	i;

	i = 0;
	while (a[i] != '\0')
	{
		if (i + 1 < n)
		{
			buf[i] = a[i];
			buf[i + 1] = '\0';
		}
		i++;
	}
	if (i == 0)
		buf[i] = '\0';
	return (i);
}
