/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:46:36 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/11 18:43:02 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	int	cpt;

	cpt = 0;
	while (s[cpt] != '\0')
		cpt++;
	return (cpt);
}

char *ft_allow(int n)
{
	char *s1;
	int cpt;

	cpt = 0;
	if (n < 0)
	{
		cpt++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		cpt++;
	}
	s1 = malloc(sizeof(char) * (cpt + 2));
	if (s1 == 0)
		return(0);
	return(s1);
}

char *ft_itoa(int n)
{//alloue la memoire ne cessaire pour creer sa chaine de caractere,
	char *s1;
	int	number;
	int cpt;
	
	s1 = ft_allow(n);
	if (n < 0)
	{
		s1[0] = '-';
		n = n * -1;
	}
	cpt = ft_strlen(s1);//probleme de lecture
	while (n > 9)
	{
		number = n % 10;
		s1[cpt] = number;
		cpt--;
		n = n / 10;
	}
	number = n % 10;
	s1[cpt] = number;
	return(s1);
}

int main() {
	char *s1;
	s1 = ft_itoa(10);
    printf("Test 1: %s\n", s1);  // Devrait afficher "12345"
    return 0;
}