#include <stdlib.h>
#include <stdio.h>

void ft_print_array(int *array, int len)
{
    int i;
    
    i = 0;
    while(i < len)
    {
        printf("%d\n", array[i]);
        i++;
    }
}

int *ft_rrange(int start, int end)
{
    int *array;
    int i;
    // saber cuantos numeros hay entre el start y el end
    int size;

    i = 0;
    size = abs(end - start) + 1;
    printf("size: %d\n", size);
    // reservar sitio para un nuevo array con malloc con ese tamaño
    array = malloc(sizeof(int) * size);
    // rellenar el array con esos valores pero empezando por el end
    while(i < size)
    {
        array[i] = end;
        if (start < end)
        {
            end--;
        }
        else
        {
            end++;
        }
        i++;
    }
    ft_print_array(array, size);


    return (array);
}

int main(void)
{   
    ft_rrange(1, 3);
    return (0);
}
