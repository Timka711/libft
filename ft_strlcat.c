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

#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d;
	size_t		j;
	const char	*src1;

	src1 = src;
	d = ft_strlen(dst);
	if (dstsize <= d)
		return (dstsize + ft_strlen(src));
	j = dstsize - d - 1;
	dst = dst + d;
	while (j--)
	{
		*dst = *src;
		if (*src == 0)
			break ;
		dst++;
		src++;
	}
	*dst = 0;
	return (d + ft_strlen(src1));
}
