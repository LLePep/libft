/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:56:14 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 17:38:42 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	cpt;
	size_t	lendest;

	lendest = ft_strlen(dest);
	cpt = 0;
	if (size <= lendest)
		return (size + ft_strlen(src));
	while ((lendest + cpt + 1) < size && src[cpt] != '\0')
	{
		dest[cpt + lendest] = src[cpt];
		cpt++;
	}
	dest[cpt + lendest] = '\0';
	return (ft_strlen(src) + lendest);
}
