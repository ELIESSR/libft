/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elteran <elteran@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:18:06 by elteran           #+#    #+#             */
/*   Updated: 2023/09/22 21:00:54 by elteran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <ctype.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>

extern int		ft_isalnum(int c);
extern int		ft_isalpha(int c);
extern int		ft_isdigit(int c);
extern int		ft_isascii(int c);
extern int		ft_isprint(int c);
extern size_t	ft_strlen(const char *s);
extern void		*ft_memset(void *b, int c, size_t len);
extern void		ft_bzero(void *s, size_t n);
extern int		ft_toupper(int c);
extern int		ft_tolower(int c);
extern void		*ft_memcpy(void *dst, const void *src, size_t n);
extern void		*ft_memmove(void *dst, const void *src, size_t len);
extern size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
extern char		*ft_strchr(const char *s, int c);
extern char		*ft_strrchr(const char *s, int c);
extern size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
extern int		ft_atoi(const char *str);
extern int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
