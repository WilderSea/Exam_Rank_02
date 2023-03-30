

void    sort_int_tab(int *tab, unsigned int size)
{
    int aux;
    int index;

    while(index < size)
    {
        if (tab[index] > tab[index + 1])
        {
            aux = tab[index];
            tab[index] = tab[index + 1];
            tab[index + 1] = aux;
            index = 0;
        }
        else
        {
            index++;
        }
    }
}
