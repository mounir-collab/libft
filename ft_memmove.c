/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:14:24 by manzar            #+#    #+#             */
/*   Updated: 2025/11/09 16:23:14 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest < src)
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else if (dest > src)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
