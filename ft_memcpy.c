/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:03:01 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/08 17:03:37 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*Pas oublie de tchecker l allocation malloc
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	if ((!dest) || (!src))
		return (NULL);
	char *buffer;
	buffer = malloc(sizeof(char) * (n + 1));
	unsigned char * a = (unsigned char *) dest;
	unsigned char * b = (unsigned char *) src;
	buffer[n + 1] = '\0';
	while (n > 0)
	{
		n--;
		buffer[n] = b[n];
	}
	while (*buffer != '\0')
	{
		*a = *buffer;
		a++;
		buffer++;
	}
	//free(buffer);
	return (dest);
}
*/
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int cpt;
	
	cpt = 0;
	unsigned char * a = (unsigned char *) dest;
	unsigned char *b  = (unsigned char *) src; 
	while (n > cpt)
	{
		a[cpt] = b[cpt];
		cpt++;
	}
	return(dest);
}
int main()
{
	char dest[7] = "abcdef"; // = str[8]
	char src[6] = "Salut";
	void *a;
	a = ft_memcpy(dest + 2, dest, 4);
	char *desta = (char *) a;
	printf("dest : %p, src : %p \n", dest, src);
	printf("%s", desta);
	return(0);
}