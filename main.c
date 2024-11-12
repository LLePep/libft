#include <stdio.h>
#include "header/libft.h"

int main()
{
    if (ft_isalpha('a') && ft_isalpha('z') && ft_isalpha('A') && ft_isalpha('Z') && !ft_isalpha('2') && !ft_isalpha('*'))
        printf("ft_isalpha : OK\n");
    else
        printf("ft_isalpha : KO\n");
    if (ft_isdigit('0') && ft_isdigit('9') && ft_isdigit('5') && !ft_isdigit(47) && !ft_isdigit(58))
        printf("ft_isdigit : OK\n");
    else
        printf("ft_isdigit : KO\n");
    if (ft_isalnum('0') && ft_isalnum('9') && ft_isalnum('5') && !ft_isalnum(47) && !ft_isalnum(58) && ft_isalnum('a') && ft_isalnum('z') && ft_isalnum('A') && ft_isalnum('Z') && ft_isalnum('2') && !ft_isalnum('*'))
        printf("ft_isalnum : OK\n");
    else
        printf("ft_isalnum : KO\n");
    if (ft_isascii(0) && ft_isascii(127) && ft_isascii(100))
        printf("ft_isacii : OK\n");
    else
        printf("ft_isacii : KO\n");
    if (ft_isprint(32) && ft_isprint(126) && !ft_isprint(127) && !ft_isprint(31) && ft_isprint(50))
        printf("ft_isprint : OK\n");
    else
        printf("ft_isprint : KO\n");
    if  (ft_strlen("Bonjour") == 7 && ft_strlen("Hello\0World") == 5  && ft_strlen("Ceci est une chaîne assez longue pour tester ft_strlen") == 55  && ft_strlen("!@#$%^&*()") == 10 && ft_strlen("Hello World") == 11 && ft_strlen("a") == 1 && ft_strlen("") == 0)
        printf("ft_strlen : OK");
    else
        printf("ft_strlen : KO");
    
    return(0);   
}

