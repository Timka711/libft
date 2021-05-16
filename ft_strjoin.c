/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 18:24:03 by kursula           #+#    #+#             */
/*   Updated: 2021/05/16 22:17:07 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	j = 0;
	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(i + 1);
	if (!res)
		return (0);
	res[i] = 0;
	while (*s1 != 0 && j < i)
	{
		res[j++] = *s1;
		s1++;
	}
	while (*s2 != 0 && j < i)
	{
		res[j++] = *s2;
		s2++;
	}
	return (res);
}
