#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int *array;
    int i;
    int size;

    i = 0;
    size = abs(end - start) + 1;
    array = malloc(sizeof(int) * size);
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
    return (array);
}
