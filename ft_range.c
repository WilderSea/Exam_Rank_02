#include <stdlib.h>
#include <stdio.h>

void ft_print_array(int *array, int len)
{
    int i;

    i = 0;
    while(i < len)
    {
        printf("elemento %d: %d\n", i, array[i]);
        i++;
    }
}

int *ft_range(int start, int end)
{
    int *array;
    int size;
    int i;

    i = 0;
    // calcular cuantos elementos va a tener el array considerando start y end
    size = abs(end - start) + 1;
    // abs = "Absolute Value"
    // absolute value of a number is that number without its sign   
    // abs in c: is the distance between that number and 0 without taking direction into account
    printf("hay %d elementos\n", size);
    // reservar memoria con ese tamaño
    array = (int *)malloc(sizeof(int) * size);
    // rellenar el array con esos valores
    while(i < size)
    {
        array[i]= start;
        if (start < end)
        {
            start++;
        }
        else
        {
            start--;
        }
        i++;
    }
    ft_print_array(array, size);
    // devolver el puntero al primer elemento del array
    return (array);
}


int main(void)
{
    ft_range(0 , -3);
    
    return (0);
}
