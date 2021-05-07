/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:19:29 by kursula           #+#    #+#             */
/*   Updated: 2021/05/07 16:45:29 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *res;

	if (!(res = (char *)malloc(sizeof(*res) * len)))
		return (0);
	res = ft_strchr()
}
