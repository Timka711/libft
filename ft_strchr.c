/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:40:27 by kursula           #+#    #+#             */
/*   Updated: 2021/04/17 19:51:58 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char* ft_strchr(char *a, int n)
{
	int i;
	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] == n)
			return (&a[i]);
		i++;
	}
	return (0);
}