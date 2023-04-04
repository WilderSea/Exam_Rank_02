
#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int largest;
    unsigned int i;

    i = 0;
    largest = tab[i]; // important. IF empty, largest value is 0.
    
    while(i < len)
    {
        if (largest < tab[i])
        {
            largest = tab[i];
        }
        i++;
    }

    printf("largest: %d\n", largest);
    return (largest);
}

int main(void)
{
    //int array[] = {2, 8, 9, 1, 50, 41};
    int array[] = {};
    int size;

    size = 0;

    max(array, size);
    return (0);
}
