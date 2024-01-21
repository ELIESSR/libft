/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elteran <elteran@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:16:58 by elteran           #+#    #+#             */
/*   Updated: 2023/11/04 19:13:23 by elteran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	ssize_t			i;
	unsigned char	c1;

	c1 = c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c1)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
