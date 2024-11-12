/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 06:20:41 by aviscogl          #+#    #+#             */
/*   Updated: 2024/11/12 06:20:41 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_tolower(unsigned int n, char *s1)
{
    s1[n] = s1[n] + 32;
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int index;

    if (s == 0)
        return ;
    index = 0;
    while (s[index] != '\0')
    {
        f(index, s);
        index++;
    }
}

int main()
{
    char string[] = "BONJOUR";
    ft_striteri(string, ft_tolower);
    printf("voici la chaine : %s", string);
    return(0);
}