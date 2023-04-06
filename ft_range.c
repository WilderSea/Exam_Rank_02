#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *array;
    int size;
    int i;

    i = 0;
    size = abs(end - start) + 1;
    array = (int *)malloc(sizeof(int) * size);
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
    return (array);
}
