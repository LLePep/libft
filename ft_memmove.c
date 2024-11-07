/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:09:43 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/07 15:10:39 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
/*commencer par la fin puis tchecker si \0 existe et la taille*/
/*groupe d'erreur si size_t n > dest || size_t n < 0*/
//apres le chevauchement on copi le buffer dans dest
//delire de memoire 

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if ((!dest) || (!src))
		return (NULL);
	int cpt;
	cpt = 0;
	unsigned char * a = (unsigned char *) dest;
	unsigned char * b = (unsigned char *) src;
	while (n > cpt)
	{
		a[cpt] = b[cpt];
		cpt++;
	}
	return (dest);
}

int main()
{
	char dest[] = "abcdef"; 
	char src[] = "Salut";
	void *a;
	a = memmove(dest, dest , 2);
	char *desta = (char *) a;
	printf("dest : %p, src : %p \n", dest, src);
	printf("%s, longueur : %lu", desta , strlen(desta));
	return(0);
}
