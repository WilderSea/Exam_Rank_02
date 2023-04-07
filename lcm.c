#include <stdio.h>


// the least common multiple of two or more numbers, is the smallest number (not counting 0)
// which is multiple of all these numbers

// para encontrar el multiplo que coincida
// hacer un bucle que no pare hasta que encuentre 1 multiplo en comun

unsigned int lcm(unsigned int a, unsigned int b)
{
    int largest; // hay que saber cual de los dos valores es el mayor
    
    // si cualquiera de los dos valores es 0, no se puede hacer el ejercicio
    if (a == 0 || b == 0)
    {
        return (0);
    }
    // guardar el valor del mayor. Se usará en el bucle para dividir.
    if (a > b)
    {
        largest = a;
    }
    else
    {
        largest = b;
    }
    // bucle infinito hasta encontrar el primer multiplo comun
    // while(1) es bucle infinito.
    // cuando largest dividido por cada uno de los numeros a y b, tenga resto 0, será el comun multiplo
    while(1)
    {
        if (largest % a == 0 && largest % b == 0)
        {
            return (largest);
        }
        else
        {
            largest++;
        }
    }
}

int main(void)
{
    printf("lcm: %d\n", lcm(8, 12));
    return (0);
}
