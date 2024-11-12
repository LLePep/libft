/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:35:10 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/12 15:34:41 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

static size_t	ft_ischarset(char const *s1, char const *set)
{
	size_t	cpt;

	cpt = 0;
	while (s1[cpt] != '\0' && s1[cpt] == set[cpt])
	{
		cpt++;
		if (set[cpt] == '\0')
			return (cpt);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		cpt;
	int		start;
	int		end;
	char	*dest;

	cpt = -1;
	start = 0;
	if (s1 == NULL || set == NULL)
		return (0);
	end = ft_strlen(s1) - ft_strlen(set);
	while (ft_ischarset(&s1[start], set))
		start = start + ft_ischarset(&s1[start], set);
	while (ft_ischarset(&s1[end], set))
		end = end - ft_ischarset(&s1[end], set);
	dest = malloc(sizeof(char) * (((unsigned int)(end - start)) + 1));
	if (dest == 0)
		return (0);
	while (++cpt <= (end - start))
		dest[cpt] = s1[start + cpt];
	dest[cpt] = '\0';
	return (dest);
}
