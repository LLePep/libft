/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:15:58 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/19 10:35:58 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			count;
	int			sign;
	long long	number;

	count = 0;
	number = 0;
	sign = 1;
	while (nptr[count] == 32 || (9 <= nptr[count] && nptr[count] <= 13))
		count++;
	if (nptr[count] == '+' || nptr[count] == '-')
	{
		if (nptr[count] == '-')
			sign = -sign;
		count++;
	}
	while (nptr[count] >= '0' && nptr[count] <= '9')
		number = (number * 10) + nptr[count++] - 48;
	number = number * sign;
	if (number > __LONG_MAX__)
		return (-1);
	if (number < (__LONG_MAX__ * -1) - 1)
		return (0);
	return ((int)number);
}
