/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:33:39 by manzar            #+#    #+#             */
/*   Updated: 2025/11/08 18:12:19 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_int(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		return (len + 1);
	}
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*ft_helper_function(char *ptr, long int nb, int len_int)
{
	ptr[len_int] = '\0';
	if (nb == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (nb < 0)
	{
		ptr[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		ptr[--len_int] = ((nb % 10) + '0');
		nb /= 10;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	int			len_int;
	char		*ptr;
	long int	nb;

	nb = (long int)n;
	len_int = (ft_strlen_int(n));
	ptr = malloc(sizeof(char) * (len_int + 1));
	if (!ptr)
		return (NULL);
	return (ft_helper_function(ptr, nb, len_int));
}
