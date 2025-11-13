/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manzar <manzar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:10:36 by manzar            #+#    #+#             */
/*   Updated: 2025/11/11 10:58:18 by manzar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	int		in_word;
	size_t	counter;

	counter = 0;
	in_word = 0;
	while (*s)
	{
		if (!in_word && (*s) != c)
		{
			counter++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (counter);
}

static void	ft_free(char **ptr, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static void	fill_tab(char *new, const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
}

static void	set_mem(char **tab, const char *s, char c)
{
	int	i;
	int	counter;
	int	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		counter = 0;
		while (s[i + counter] && s[i + counter] != c)
			counter++;
		if (counter > 0)
		{
			tab[index] = malloc(sizeof(char) * (counter + 1));
			if (!tab[index])
				ft_free(tab, index);
			fill_tab(tab[index], (s + i), c);
			index++;
			i = i + counter;
		}
		else
			i++;
	}
	tab[index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	n_words;

	if (!s)
		return (NULL);
	n_words = ft_count_words(s, c);
	ptr = malloc(sizeof(char *) * (n_words + 1));
	if (!ptr)
		return (NULL);
	set_mem(ptr, s, c);
	return (ptr);
}
