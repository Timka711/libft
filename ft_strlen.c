/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:03:57 by kursula           #+#    #+#             */
/*   Updated: 2021/05/16 22:18:55 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen (const char *a)
{
	int	i;

	if (!a)
		return (0);
	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}
