/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:05:02 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/09 10:01:53 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *dest, const char *src, size_t len)
{
	size_t	lensrc;
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	lensrc = ft_strlen(src);
	if(len < lensrc )
		return(0);
	if (lensrc == 0 || len == 0 )
		return((char *)dest);
	while (len >= lensrc + i && dest[i] != '\0')
	{
		while (src[j] == dest[i + j])
		{
			j++;
			if (j == lensrc)
				return((char *)&dest[i]);
		}	
		j = 0;
		i++;
	}
	return(0);
}