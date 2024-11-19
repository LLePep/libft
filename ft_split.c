/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:07:51 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 09:34:31 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_all(char **tab, int index)
{
	int	count;

	count = 0;
	while (count < index)
	{
		free(tab[count]);
		count++;
	}
	free(tab);
	return (NULL);
}

static int	ft_issep(char const *s1, char c)
{
	if (*s1 == c)
		return (1);
	return (0);
}

static int	ft_countstring(char const *s1, char c)
{
	int	count_string;
	int	count_char;

	count_char = 0;
	count_string = 0;
	while (s1[count_char] != '\0')
	{
		while (ft_issep(&s1[count_char], c) && s1[count_char] != '\0')
			count_char++;
		if (s1[count_char] != '\0')
			count_string++;
		while (!ft_issep(&s1[count_char], c) && s1[count_char] != '\0')
			count_char++;
	}
	return (count_string);
}

static char	*ft_countword(char const *s1, char c)
{
	char	*string;
	int		count;

	count = 0;
	while (!ft_issep(&s1[count], c) && s1[count] != '\0')
		count++;
	string = malloc(sizeof(char) * (count + 1));
	if (string == 0)
		return (0);
	string[count] = '\0';
	while (count > 0)
	{
		count--;
		string[count] = s1[count];
	}
	return (string);
}

char	**ft_split(char const *s1, char c)
{
	char	**tab;
	int		count;
	int		index;

	count = 0;
	index = 0;
	tab = malloc(sizeof(char *) * (ft_countstring(s1, c) + 1));
	if (tab == 0)
		return (0);
	while (s1[count] != '\0')
	{
		while (ft_issep(&s1[count], c) && s1[count] != '\0')
			count++;
		if (s1[count] != '\0')
		{
			tab[index] = ft_countword(&s1[count], c);
			if (tab[index] == NULL)
				return (ft_free_all(tab, index));
			index++;
		}
		while (!ft_issep(&s1[count], c) && s1[count] != '\0')
			count++;
	}
	tab[index] = NULL;
	return (tab);
}
