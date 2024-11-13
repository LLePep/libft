/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:46:36 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/12 17:36:42 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_allow(int n)
{
	char	*s1;
	int		cpt;

	cpt = 0;
	if (n == -2147483648)
	{
		s1 = malloc(sizeof(char) * 12);
		return (s1);
	}
	if (n < 0 && cpt++ >= 0)
		n = n * -1;
	while (n > 9 && cpt++ >= 0)
		n = n / 10;
	if (n % 10 >= 0 || n % 10 <= 9)
		cpt++;
	s1 = malloc(sizeof(char) * (cpt + 1));
	ft_memset(s1, 48, cpt);
	s1[cpt] = '\0';
	if (s1 == 0)
		return (0);
	return (s1);
}

char	*ft_itoa(int n)
{
	char	*s1;
	int		number;
	int		cpt;

	s1 = ft_allow(n);
	if (n == -2147483648)
		s1 = "-2147483648\0";
	if (n == -2147483648)
		return (s1);
	if (n < 0)
	{
		s1[0] = '-';
		n = n * -1;
	}
	cpt = ft_strlen(s1);
	while (n > 9)
	{
		number = n % 10;
		s1[--cpt] = number + '0';
		n = n / 10;
	}
	number = n % 10;
	s1[--cpt] = number + '0';
	return (s1);
}
