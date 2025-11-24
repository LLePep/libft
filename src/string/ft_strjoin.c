/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:48:55 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 16:46:10 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		count;

	count = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	while (*s1 != '\0' && s1 != NULL)
	{
		dest[count] = *s1;
		count++;
		s1++;
	}
	while (*s2 != '\0' && s2 != NULL)
	{
		dest[count] = *s2;
		count++;
		s2++;
	}
	dest[count] = '\0';
	return (dest);
}
