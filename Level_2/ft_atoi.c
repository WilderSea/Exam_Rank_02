
#include <stdlib.h>
#include <stdio.h>


int ft_atoi(const char *str)
{
    int num;
    int neg;

    num = 0;
    neg = 1;

    //comprobar que no haya espacios o caracteres extraños
    while(*str && (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == ' '))
    {
        str++;
    }
    // comprobar si es negativo
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
        {
            neg = -1;
        }
        str++;
    }
    // comprobar que sean digitos
    // atoi coge la primera cifra y le multiplica por 10 y le suma la siguiente
    while(*str && (*str >= '0' || *str <= '9'))
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    num = num * neg;
    return (num);
}


int main(void)
{
   
    printf("result is: %d\n", ft_atoi("789"));
    printf("result is: %d\n", ft_atoi("-789"));
    printf("result is: %d\n", ft_atoi("-+789")); // este da resultado distinto
    printf("result is: %d\n", ft_atoi("-    +- 789")); // este da resultado distinto
    
    /*ft_atoi("letras");
    ft_atoi("-789");
    ft_atoi("     ????980");*/

    printf("result is: %d\n", atoi("789"));
    printf("result is: %d\n", atoi("-789"));
    printf("result is: %d\n", atoi("-+789"));
    printf("result is: %d\n", atoi("-    +- 789"));
    /*atoi("letras");
    atoi("-789");
    atoi("     ????980");*/
    return (0);
}
