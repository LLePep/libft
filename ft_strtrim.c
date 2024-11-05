int	ft_strlen(const char *s)
{
	int	cpt;

	while (*s != '\0')
	{
		cpt++;
		s++;
	}
	return (cpt);
}
char *ft_strtrim(char const *s1, char const *set)
{//partir du principe qu il n y a pas de separateur, balayer le set, 
	char *dest;
	int len;
	int cpt;
	int	sep;

	sep = 0;
	len = ft_strlen(s1);
	while (*s1 != '\0')
	{
		while (set[cpt])
		{
			if (set[cpt] == *s1)
			{
				sep = 1;
			}
			cpt++;
		}
		if (!sep)
		{
			
		}
		
	}
	
	return (dest);
}