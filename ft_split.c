/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 13:33:47 by kursula           #+#    #+#             */
/*   Updated: 2021/05/15 14:33:24 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**array(char const *s, char c)
{
	int		l;
	int		i;
	char	**res;

	i = 0;
	l = 0;
	res = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != 0)
		{
			l++;
			while (s[i] != c && s[i] != 0)
				i++;
		}
	}
	res = (char **)malloc(sizeof(char *) * (l + 1));
	if (res)
		res[l] = 0;
	return (res);
}

int	free_if_needed(char **arr, int pos)
{
	int	i;

	i = 0;
	if (!arr[pos])
	{
		while (arr[i])
		{
			free(arr[i]);
			i++;
		}
		free(arr);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		f;
	int		i;
	int		w;

	if (!s)
		return (0);
	i = 0;
	w = 0;
	res = array(s, c);
	if (!res)
		return (0);
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		f = i;
		while (s[i] != c && s[i] != 0)
			i++;
		if (f < i)
			res[w] = ft_substr(s, f, i - f);
		if (f < i && free_if_needed(res, w++))
			return (0);
	}
	return (res);
}
