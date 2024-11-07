/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:48:55 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/06 15:42:29 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
static size_t	ft_strlen(const char *s)
{
	int	cpt;

	while (*s != '\0')
	{
		cpt++;
		s++;
	}
	return (cpt);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		cpt;

	cpt = 0;
	dest = malloc(sizeof(char) * (ft_strlen (s1) + ft_strlen (s2) + 1));
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

/* int main(void)
{
	char s1[] = "hello";
	char s2[] = "world";

	
	printf("ori %s \n mine %s.", join(s1, s2), ft_strjoin(s1, s2));
	return ;
} */