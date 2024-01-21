/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elteran <elteran@student.42madrid.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:27:10 by elteran           #+#    #+#             */
/*   Updated: 2023/10/20 16:32:47 by elteran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	c = malloc(count * size * sizeof(char));
	if (!c)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}
