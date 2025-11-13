/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:18:57 by manzar            #+#    #+#             */
/*   Updated: 2025/11/10 13:45:10 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	start;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0 && !dst)
		return (src_len);
	dest_len = ft_strlen(dst);
	start = dest_len;
	if (dest_len >= size)
	{
		return (src_len + size);
	}
	start = dest_len;
	i = 0;
	while ((start + i) < size - 1 && src[i])
	{
		dst[start + i] = src[i];
		i++;
	}
	dst[start + i] = '\0';
	return (dest_len + src_len);
}
