/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kursula <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:32:00 by kursula           #+#    #+#             */
/*   Updated: 2021/05/06 13:40:36 by kursula          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_isdigit(int a);
int		ft_isalpha(int a);
void	ft_bzero(void *s1, size_t n);
int		ft_strlen(const char *a);
void	*ft_memset(void *s1, int c, size_t n);
void	*ft_calloc(size_t s, size_t size);
void	*ft_memcpy(void *restrict s1, const void *restrict s2, size_t n);
void	*ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *restrict buf, const char *restrict a, size_t n);
size_t	ft_strlcpy(char *restrict buf, const char *restrict a, size_t n);
char	*ft_strchr(const char *a, int n);
char	*ft_strrchr(const char *a, int n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *a, const char *b, size_t n);
int		ft_atoi(const char *s);
int		ft_isalnum(int a);
int		ft_isascii(int a);
int		ft_isprint(int a);
int		ft_toupper (int a);
int		ft_tolower (int a);

#endif
