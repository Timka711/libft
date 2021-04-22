/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 22:14:46 by kursula           #+#    #+#             */
/*   Updated: 2021/04/22 20:32:39 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *restrict buf, const char *restrict a, size_t n)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (buf[i] != '\0')
		i++;
	while (i < n - 1)
	{
		buf[i] = a[j];
		i++;
		j++;
	}
	buf[i] = '\0';
	while (a[j] != '\0')
		j++;
	return ((i + j) - 1);
}
