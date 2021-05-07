/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 22:14:46 by kursula           #+#    #+#             */
/*   Updated: 2021/05/07 14:38:53 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *restrict buf, const char *restrict a, size_t n)
{
	size_t	i;
	size_t	j;
	size_t res;

	j = 0;
	i = 0;
	while (buf[i] != '\0' && i + 1 < n)
		i++;
	if (i > 0)
		res = i - 1;
	while (i + 1 < n)
	{
		if (a[j] != 0)
		{
			buf[i] = a[j];
			j++;
		}
		i++;
	}
	return(res + j);
}
