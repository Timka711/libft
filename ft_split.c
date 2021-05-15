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

char	**wordf(char const *s, char c)
{
	char	**res;
	int		word;
	int		i;

	word = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c && i != 0)
			word++;
		while (s[i] == c && i != 0)
			i++;
		if (s[i] == 0)
			break ;
		i++;
	}
	if (s[--i] != c)
		word++;
	res = (char **)malloc((word + 1) * sizeof(char *));
	if (!res)
		return (0);
	res[word] = 0;
	res[word - 1] = 0;
	return (res);
}

void	letterf(char const *s, char c, char **res)
{
	int	word;
	int	letter;
	int	i;

	letter = 0;
	i = 0;
	word = 0;
	while (s[i] != 0)
	{
		letter++;
		if (s[i] == c)
		{
			res[word] = (char *)malloc((letter + 1) * sizeof(char));
			ft_memset(res[word], '\0', letter);
			letter = 0;
			word++;
		}
		i++;
	}
	if (s[--i] != c)
		res[word] = (char *)malloc(letter + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word;
	int		letter;
	int		i;

	i = 0;
	word = 0;
	res = wordf(s, c);
	letterf(s, c, res);
	while (s[i] != 0)
	{
		letter = 0;
		while (s[i] != c && s[i] != 0)
			res[word][letter++] = s[i++];
		if (letter != 0)
			res[word++][letter] = 0;
		if (s[i] == 0)
			break ;
		i++;
	}
	return (res);
}
