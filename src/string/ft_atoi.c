/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:15:58 by lpalabos          #+#    #+#             */
/*   Updated: 2025/12/06 14:52:45 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @return atoi return 1 for fail or 0 sucess
 */
int	ft_atoi(const char *str, int *to_return)
{
	int	count;
	int	sign;

	*to_return = 0;
	count = 0;
	sign = 1;
	while (ft_iswhitespace(str[count]))
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count++] == '-')
			sign = -sign;
	}
	if (str[count] < '0' || str[count] > '9')
		return (1);
	while (str[count] >= '0' && str[count] <= '9')
	{
		if (sign == 1 && *to_return > (INT_MAX - (str[count] - '0')) / 10)
			return (1);
		if (sign == -1 && *to_return > (-(INT_MIN + (str[count] - '0'))) / 10)
			return (1);
		*to_return = ((*to_return * 10) + str[count++] - 48);
	}
	*to_return = (*to_return * sign);
	return (0);
}
