/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:05:02 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/08 15:14:32 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static size_t	ft_strlen(const char *s)
{
	int	cpt;

	cpt = 0;
	while (s[cpt] != '\0')
		cpt++;
	return (cpt);
}

char *ft_strnstr(const char *dst, const char *src, size_t len)
{
	int	lensrc;
	int i;
	int j;
	
	i = 0;
	j = 0;
	lensrc = ft_strlen(src);
	if(len < lensrc )
		return(0);
	if (lensrc == 0 || len == 0 )
		return((char *)dst);
	while (len >= lensrc + i && dst[i] != '\0')
	{
		while (src[j] == dst[i + j])
		{
			j++;
			if (j == lensrc)
				return((char *)&dst[i]);
		}	
		j = 0;
		i++;
	}
	return(0);
}

int main ()
{
	printf("Voici la premiere occurence de s1 : %s", ft_strnstr("hello world", "world", 5));
	return(0);
}