/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 08:35:10 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/09 08:35:10 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	cpt;

	while (*s != '\0')
	{
		cpt++;
		s++;
	}
	return (cpt);
}
/*
char *ft_strtrim(char const *s1, char const *set)
{//partir du principe qu il n y a pas de separateur, balayer le set, 
	char *dest;
	size_t len;
	size_t cpt;
	size_t	sep;

	sep = 0;
	len = ft_strlen(s1);
	while (*s1 != '\0')
	{
		while (set[cpt])
		{
			if (set[cpt] == *s1)
			{
				sep = 1;
			}
			cpt++;
		}
		if (!sep)
		{
			
		}
		
	}
	
	return (dest);
}
*/