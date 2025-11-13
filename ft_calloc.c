/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:24:49 by manzar            #+#    #+#             */
/*   Updated: 2025/11/08 14:03:39 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*area;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((nmemb) > (size_t)-1 / size)
		return (NULL);
	area = malloc(size * nmemb);
	if (!area)
		return (NULL);
	ft_memset(area, 0, (nmemb * size));
	return (area);
}
