/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:30:10 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/09 09:56:57 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int cpt;

    cpt = 0;
    while(s[cpt] != c && s[cpt] != '\0')
        cpt++;
    if (s[cpt] == c)
        return((char *)&s[cpt]);   
    return (0);
}