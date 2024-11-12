/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:13:21 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 17:39:40 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	cpt;

	cpt = 0;
	if (start >= ft_strlen(s))
		return (0);
	s2 = malloc(sizeof(char) * len + 1);
	if (s2 == 0)
		return (0);
	while (s[start + cpt] != '\0' && cpt < len)
	{
		s2[cpt] = s[start + cpt];
		cpt++;
	}
	s2[cpt] = 0;
	return (s2);
}
