/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:22:36 by manzar            #+#    #+#             */
/*   Updated: 2025/11/09 11:32:06 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	const unsigned char	*p;
	unsigned char		ch;
	size_t				i;

	ptr = s;
	p = NULL;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((*ptr) == ch)
		{
			p = ptr;
			return ((void *)p);
		}
		ptr++;
		i++;
	}
	return ((void *)p);
}
