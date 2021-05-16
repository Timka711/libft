/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:50:08 by kursula           #+#    #+#             */
/*   Updated: 2021/05/06 12:59:25 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)a[i] == (unsigned char)b[i] && i < n - 1 \
	&& a[i] != 0 && b[i] != 0)
		i++;
	return ((unsigned char)a[i] - (unsigned char)b[i]);
}
