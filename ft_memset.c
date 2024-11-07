/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:18:49 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/06 12:56:31 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	unsigned char *dest = (unsigned char*) s;
	while (n > 0)
	{
		*dest = c;
		dest++;
		n--;	
	}
	return (s);
}
/*
int	main()
{
	char ptr[7] = "Bonjour";
	ft_memset(ptr, 35, 1);
	printf("%s", ptr);
	return (0);
}
*/