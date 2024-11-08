#include <stdio.h>

char ft_strchr(const char *s, int c)
{
    int cpt;

    cpt = 0;
    while(s[cpt] != c && s[cpt] != '\0')
        cpt++;
    if (s[cpt] == c)
        return(s[cpt]);   
    return (0);
}

int main()
{
    char *s = "Baujour taut le mande va bien ?";
    printf("votre caractere recherche : %c", ft_strchr(s, 'Z'));
    return(0);
}