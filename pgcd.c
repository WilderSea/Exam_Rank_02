#include <stdio.h>
#include <stdlib.h>

/*

MAXIMO COMUN DIVISOR
Greatest Common Denominator

MCD(a, b) = a * b / MCM(a, b)

GCD(a, b) = a * b / LCM(a, b)

*/

int ft_lcm(int a, int b)
{
    int largest;

    if (a == 0 || b == 0)
    {
        return (0);
    }
    if (a > b)
    {
        largest = a;
    }
    else
    {
        largest = b;
    }
    while(1)
    {
        if (largest % a == 0 && largest % b == 0)
        {
            return (largest);
        }
        largest++;
    }
}

/*
  máximo común divisor = factores comunes con menor exponente
  
  36 => (2*2) * (3*3)
  60 => (2*2) * 3 * 5
  
  MCD => (2*2) * 3 = 12
  Máximo Común Divisor (MCD) = Highest/Greatest Common Divisor (GCD)
  
  MCD(a,b) = (a * b) / LCM(a,b)
  
*/

int ft_pgcd(char *arg_1, char *arg_2)
{
    int gcd;
    int lcm;
    int a;
    int b;

    a = atoi(arg_1);
    b = atoi(arg_2);
    lcm = ft_lcm(a, b);
    gcd = (a * b) / lcm;
    printf("%d\n", gcd);
    return (gcd);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_pgcd(argv[1], argv[2]);
    }
    else
    {
        printf("\n");
    }
    return (0);
}
