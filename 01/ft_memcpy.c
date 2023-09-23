/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elteran <elteran@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:18:49 by elteran           #+#    #+#             */
/*   Updated: 2023/09/20 18:30:33 by elteran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *) dst + i) = *((const char *) src + i);
		i++;
	}
	if (dst == NULL && src == NULL)
		return (NULL);
	return (dst);
}
