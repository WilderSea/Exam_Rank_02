
#include <unistd.h>

int ft_atoi(char *str)
{
    int result;
    int neg;

    result = 0;
    neg = 1;
    // gestionar espacios y tabs etc
    while (*str == 32 || *str == '\t' || *str == '\v' || *str == '\n' || *str == '\r' || *str == '\f')
    {
        str++;
    }
    // signos + y -
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
        {
            neg = -1;
        }
        str++;
    }
    // cada numero a int
    while(*str)
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    result = result * neg;
    return (result);
}

void ft_putnbr(int num)
{
    // escribe el numero as a char
    // recursividad
    // mayor que 9
    if (num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    // entre 0 y 9
    if (num >= 0 && num <= 9)
    {
        num = num + '0';
        write(1, &num, 1);
    }
}

int ft_is_prime(int num)
{
    int i;

    i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            return (0);
        }
        i++;
    }
    return (1); // es primo
}

void ft_add_prime_sum(unsigned int num)
{
    int result;

    result = 0;
    // num que me pasen, ir hacia abajo y comprobar que numeros son primos
    while (num > 1)
    {
        // comprobar cada num a ver si es primo
        if (ft_is_prime(num) == 1) // es primo
        {
            // cada primo que encuentre, lo sumo al resultado final
            result = result + num;
        }
        num--;
    }
    // put number
    ft_putnbr(result);
}


int main(int argc, char **argv)
{
    int number;

    if (argc == 2)
    {
        number = ft_atoi(argv[1]);
        if (number < 0)
        {
            write(1, "0", 1);
        }
        else
        {
            ft_add_prime_sum(number);
            //ft_putnbr(192);
        }
    }
    else
    {
        write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}
