/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:08:57 by kursula           #+#    #+#             */
/*   Updated: 2021/04/21 17:44:35 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *s1, void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((char *)s1)[i] = ((char *)s2)[i];
	return (s1);
}