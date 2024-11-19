/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:05:02 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 16:48:14 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *dest, const char *src, size_t len)
{
	const size_t	lensrc = ft_strlen(src);
	const size_t	lendest = ft_strlen(dest);
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (len < lensrc || lendest < lensrc)
		return (0);
	if (lensrc == 0 || len == 0)
		return ((char *)dest);
	while (len >= lensrc + i && dest[i] != '\0')
	{
		while (src[j] == dest[i + j])
			if (++j == lensrc)
				return ((char *)&dest[i]);
		j = 0;
		i++;
	}
	return (0);
}
