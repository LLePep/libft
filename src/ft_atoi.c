/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:15:58 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/11 18:14:55 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{//gerer les long les overflow et les underflow, utiliser la bibliotheque LIMITS.h
//avec des bool
	int cpt;
	int sign;
	int number;

	cpt = 0;
	number = 0;
	sign = 1;
	while ( nptr[cpt] == 32 || (9 <= nptr[cpt] && nptr[cpt] <= 13))
		cpt++;
	while ( nptr[cpt] == '+' || nptr[cpt] == '-')
	{
		if (nptr[cpt] == '-')
			sign = -sign;
		cpt++;
	}
	while (nptr[cpt] >= '0' && nptr[cpt] <= '9')
	{
		number = number * 10;
		number = number + nptr[cpt] - 48;
		cpt++;
	}
	number = number * sign;
	return(number);
}