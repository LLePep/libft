/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpalabos <lpalabos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:07:51 by lpalabos          #+#    #+#             */
/*   Updated: 2024/11/11 17:44:36 by lpalabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/libft.h"

static int    ft_issep(char const *s1, char c)
{//Fait en sorte de renvoyer 1 si c un sep ou 0 sinon
	if (*s1 == c)
		return(1);
	return(0);
}

static int    ft_countstring(char const *s1, char c)
{//Calcul le noumbre de string presente dans la chaine qui est delimite par les separateurs
	int	count;
	int	cpt;
	
	cpt = 0;
	count = 0;
	while (s1[cpt] != '\0')
	{
		while (ft_issep(&s1[cpt], c) && s1[cpt] != '\0')
			cpt++;
		if (s1[cpt] != '\0')
			count++;
		while (!ft_issep(&s1[cpt], c) && s1[cpt] != '\0')	
			cpt++;
	}
	return(count);
}

static char *ft_countword(char const *s1, char c)
{
	char *string;
	int cpt;

	cpt = 0;
	while (!ft_issep(&s1[cpt], c))
			cpt++;
	string = malloc(sizeof(char) * cpt + 1);
	if (string == 0)
		return(0);
	string[cpt + 1] = '\0';
	while (cpt > 0)
	{
		cpt--;
		string [cpt] = s1[cpt];
	}
	return (string);
}

char **ft_split(char const *s1, char c)
{
	char **tab;
	int cpt;
	int index;

	cpt = 0;
	index = 0;
	if (s1 == NULL)
		return (0);
	tab = malloc(sizeof(char*) * (ft_countstring(s1, c) + 1));
	if (tab == 0)
		return (0);
	while(s1[cpt] != '\0')
	{
		while (ft_issep(&s1[cpt], c) && s1[cpt] != '\0')
			cpt++;
		if(s1[cpt] != '\0')
		{
			tab[index] = ft_countword(&s1[cpt], c);
			index++;
		}
		while (!ft_issep(&s1[cpt], c) && s1[cpt] != '\0')
			cpt++;
	}
	tab[index] = NULL;
	return(tab);
}