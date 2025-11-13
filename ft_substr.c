/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:29:05 by manzar            #+#    #+#             */
/*   Updated: 2025/11/08 14:05:23 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allocate_one(void)
{
	char	*one_allocated;

	one_allocated = malloc(1);
	if (!one_allocated)
		return (NULL);
	one_allocated[0] = '\0';
	return (one_allocated);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substrig;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_allocate_one());
	if (len > s_len - start)
		len = s_len - start;
	substrig = malloc(len + 1);
	if (!substrig)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substrig[i] = s[start + i];
		i++;
	}
	substrig[i] = '\0';
	return (substrig);
}
