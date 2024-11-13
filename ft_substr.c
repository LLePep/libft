/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:13:21 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/13 17:40:53 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	cpt;

	cpt = 0;
	if (start >= ft_strlen(s) || s[cpt] == '\0' || len == 0)
		return (ft_calloc(1, sizeof(char)));
	if (len >= ft_strlen(s + start))
		len = ft_strlen(s + start);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (0);
	while (s[start + cpt] != '\0' && cpt < len)
	{
		s2[cpt] = s[start + cpt];
		cpt++;
	}
	s2[cpt] = 0;
	return (s2);
}
