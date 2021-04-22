/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 16:50:08 by kursula           #+#    #+#             */
/*   Updated: 2021/04/22 16:46:20 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *a, const char *b, size_t n)
{
	size_t	i;

	i = 0;
	while (a[i] == b[i] && i < n)
		i++;
	if (a[i] > b[i])
		return (1);
	else if (a[i] < b[i])
		return (-1);
	return (0);
}
