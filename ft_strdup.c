/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:04:59 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 09:56:45 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// On verifie pas l'allocation du parametre car on veux que ca crash
char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	len;
	size_t	count;

	count = 0;
	len = ft_strlen(s);
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == 0)
		return (NULL);
	while (count <= len)
	{
		dst[count] = s[count];
		count++;
	}
	dst[count] = '\0';
	return (dst);
}
