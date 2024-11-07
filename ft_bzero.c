/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:52:16 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/06 14:00:00 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	unsigned char *dest = (unsigned char *) s;
	while(n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
}
/*
int main()
{
	char ptr[] = "Salut"; 
	printf("%lu et %s\n", strlen(ptr), ptr);
	ft_bzero(ptr, 3);
	printf("%lu et %s\n", strlen(ptr), ptr);
	return (0);
}
*/