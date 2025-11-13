/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:27:48 by manzar            #+#    #+#             */
/*   Updated: 2025/11/08 21:57:33 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dupplicated;
	size_t	src_len;
	int		i;

	src_len = ft_strlen(s);
	dupplicated = malloc((src_len + 1) * sizeof(char));
	if (!dupplicated)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dupplicated[i] = s[i];
		i++;
	}
	dupplicated[i] = '\0';
	return (dupplicated);
}
