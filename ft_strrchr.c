#include <stdio.h>

char ft_strchr(const char *s, int c)
{
    int cpt;
    int find;

    cpt = 0;
    find = 0;
    while(s[cpt] != '\0')
    {
        if (s[cpt] == c)
            find = cpt;
        cpt++;
    }
    if (s[find] == c)
        return(s[find]);   
    return (0);
}

int main()
{
    char *s = "Baujour taut le mande va bien ?";
    printf("votre caractere recherche : %c", ft_strchr(s, 'a'));
    return(0);
}