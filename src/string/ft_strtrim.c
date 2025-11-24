/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:35:10 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/18 13:59:42 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_issep(char const *s1, char const *set)
{
	int	count;

	count = 0;
	while (set[count] != '\0')
	{
		if (*s1 == set[count])
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	size_t	start;
	size_t	end;
	size_t	count;

	start = 0;
	count = -1;
	end = ft_strlen(s1);
	while (ft_issep(&s1[start], set) && start != end)
		start = start + 1;
	while (end > 0 && ft_issep(&s1[end - 1], set))
		end = end - 1;
	if ((int)(end - start) < 0)
	{
		dest = malloc(1);
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(sizeof(char) * (end - start + 1));
	if (dest == NULL)
		return (NULL);
	while (++count < (end - start))
		dest[count] = s1[start + count];
	dest[count] = '\0';
	return (dest);
}
