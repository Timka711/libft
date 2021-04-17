/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:11:13 by kursula           #+#    #+#             */
/*   Updated: 2021/04/16 14:13:52 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
		return (1);
	return (0);
}
