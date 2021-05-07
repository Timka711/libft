/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:55:46 by kursula           #+#    #+#             */
/*   Updated: 2021/05/06 15:55:49 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, int n)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (s2 == 0 || s2[0] == '\0')
		return ((char *)s1);
	while (++i < n)
	{
		if (s1[i] == s2[j])
		{
			if (s2[++j] == 0)
				return (&((char *)s1)[i - j + 1]);
		}
		else if (s1[i] == 0)
			break ;
		else if (s1[i] != s2[j])
		{
			i = i - j;
			j = 0;
		}
	}
	return (0);
}
