/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:48:55 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 17:38:38 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		cpt;

	cpt = 0;
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		dest[cpt] = *s1;
		cpt++;
		s1++;
	}
	while (*s2 != '\0')
	{
		dest[cpt] = *s2;
		cpt++;
		s2++;
	}
	dest[cpt] = '\0';
	return (dest);
}
