/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:57:13 by kursula           #+#    #+#             */
/*   Updated: 2021/04/22 19:17:08 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *restrict s1, const void *restrict s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((char *)s1)[i] = ((char *)s2)[i];
	return (s1);
}
