/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:18:49 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 13:30:53 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;

	if (!s)
		return (NULL);
	dest = (unsigned char *)s;
	while (n > 0)
	{
		*dest = c;
		dest++;
		n--;
	}
	return (s);
}
/*
int	main(void)
{
	char	ptr[7] = "Bonjour";

	ft_memset(ptr, 35, 1);
	printf("%s", ptr);
	return (0);
}
*/