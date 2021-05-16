/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:19:29 by kursula           #+#    #+#             */
/*   Updated: 2021/05/16 22:08:50 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (0);
	if ((size_t)ft_strlen(s) <= start)
	{
		res = ft_calloc(1, sizeof(char *));
		return (res);
	}
	if ((int)len > ft_strlen((char *)s))
		len = ft_strlen((char *)s) - start;
	res = (char *)malloc(len + 1);
	if (!res)
		return (0);
	res[len] = 0;
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
