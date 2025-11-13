/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:06:49 by manzar            #+#    #+#             */
/*   Updated: 2025/11/10 13:40:10 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*ptr = (unsigned char *)src;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	p = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		p[i] = ptr[i];
		i++;
	}
	return (dest);
}
