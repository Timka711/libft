/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:39:58 by kursula           #+#    #+#             */
/*   Updated: 2021/04/21 17:38:58 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t s, size_t size)
{
	void	*arr;

	arr = malloc(s * size);
	if (arr == 0)
		return (0);
	ft_bzero(arr, s * size);
	return (arr);
}
