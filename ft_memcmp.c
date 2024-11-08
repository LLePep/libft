/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 09:45:05 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/08 13:56:35 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp (const void *s1, const void *s2, size_t size)
{
	int cpt;
	unsigned char *sa1 = (unsigned char *) s1;
	unsigned char *sa2 = (unsigned char *) s2;

	cpt = 0;
	while(cpt < size)
	{
		if (sa1[cpt] != sa2[cpt])
			return(sa1[cpt] - sa2[cpt]);
		cpt++;
	}
	return (0);
}

int main()
{
	char s1[] = "";
	char s2[] = "";
	printf("retour ma fonction : %d\n", ft_memcmp(s1, s2, 50));
	printf("retour fonction de base : %d ", memcmp(s1, s2, 50));
	return (0);
}