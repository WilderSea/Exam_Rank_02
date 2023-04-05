#include <unistd.h>

/*
 recorrer el string hasta el indice de la ultima letra
 cada vez que haya un espacio/tab, escribir 3 espacios
 llegar al final del string, y guardar el indice de la ultima letra
 al final del string que no haya espacios
*/

int ft_last_char(char *str)
{
    int index;
    int i;

    index = 0;
    i = 0;
    while(str[i])
    {
        i++; // llego hasta el final
    }
    i--; // me salgo del nulo
    // voy hacia atras saltando espacios, hasta el primer caracter que encuentre
    while(str[i] == ' ' || str[i] == '\t')
    {
        i--;
    }
    index = i; // guardo su index
    //printf("index: %d, char: %c\n", index, str[i]);
    return (index);
}

void ft_expand_str(char *str)
{
    int i;
    int index_last;

    i = 0;
    index_last = ft_last_char(str);
    // recorro el string pero no hasta el final, sino hasta el ultimo char imprimible
    while(str[i] && i <= index_last)
    {
        // al principio del string que no haya espacios
        if (str[i] == ' ' && i == 0)
        {
            while(str[i] == ' ')
            {
                i++;
            }
        }
        // cuando me encuentro un espacio/tab, sustituirlo por 3 espacios
        if (str[i] == ' ' || str[i] == '\t')
        {
            // mientras que hayan espacios, avanzar
            while(str[i] == ' ' || str[i] == '\t')
            {
                i++;
            }
            //i--; // vuelvo atras, antes de la letra.
            // escribo 3 espacios
            write(1, "   ", 3);
        }
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_expand_str(argv[1]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
