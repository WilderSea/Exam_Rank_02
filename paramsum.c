#include <unistd.h>

void ft_putnbr(int num)
{
    char num_as_char;
    if (num > 9)
    {
        ft_putnbr(num / 10);
        ft_putnbr(num % 10);
    }
    if (num >= 0 && num <= 9)
    {
        num_as_char = num + '0';
        write(1, &num_as_char, 1);
    }
}

void ft_paramsum(int num_args)
{
    int total;

    total = num_args - 1;
    ft_putnbr(total);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    (void)argv;

    ft_paramsum(argc);    
    return (0);
}
