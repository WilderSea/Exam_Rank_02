#include <stdio.h>


int max(int *tab, unsigned int len)
{
    int largest;
    int i;

    largest = tab[i]; // important. If array is empty, largest is 0;
    i = 0;
    while(i < len)
    {
        if (tab[i] < tab[i + 1])
        {
            
            largest = tab[i + 1];
            
        }
        printf("tab[%d] is: %d\n", i, tab[i]);
        i++;
    }


    printf("final largest is: %d\n", largest);
    return (largest);
}

int main(void)
{
    int array[] = {9, 7, 1, 4, 50, 25};
    //int array[] = {};
    int len;

    len = 6;
    
    max(array, len);

    return (0);
}
