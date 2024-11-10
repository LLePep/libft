/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:56:14 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/09 10:01:42 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//la fonction verifie la longueuer de dest par rapport a src
//Penser a size - 1 pour placer le /0

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t cpt;
	size_t lendest;

	lendest = ft_strlen(dest);
	cpt = 0;
	if (size <= lendest)
        return size + ft_strlen(src);
	while( ( lendest + cpt + 1 ) < size && src[cpt] != '\0')
	{
		dest[cpt + lendest] = src[cpt];
		cpt++;
	}
	dest[cpt + lendest] = '\0';
	return (ft_strlen(src) + lendest);
}