/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:46:36 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/18 09:57:23 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allow(int n)
{
	char	*s1;
	int		count;

	count = 0;
	if (n < 0 && count++ >= 0)
		n = n * -1;
	while (n > 9 && count++ >= 0)
		n = n / 10;
	if (n % 10 >= 0 || n % 10 <= 9)
		count++;
	s1 = malloc(sizeof(char) * (count + 1));
	if (s1 == 0)
		return (NULL);
	ft_memset(s1, 48, count);
	s1[count] = '\0';
	if (s1 == 0)
		return (0);
	return (s1);
}

char	*ft_itoa(int n)
{
	char	*s1;
	size_t	count;

	if (n == -2147483648)
	{
		s1 = ft_strdup("-2147483648\0");
		return (s1);
	}
	s1 = ft_allow(n);
	if (s1 == 0)
		return (NULL);
	if (n < 0)
	{
		s1[0] = '-';
		n = n * -1;
	}
	count = ft_strlen(s1);
	while (n > 9)
	{
		s1[--count] = (n % 10) + '0';
		n = n / 10;
	}
	s1[--count] = (n % 10) + '0';
	return (s1);
}
