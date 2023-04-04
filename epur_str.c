#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

void ft_epur_str(char *str)
{
    int i;
    int index_last;

    i = 0;
    // llegar al final del string
    while(str[i])
    {
        i++;
    }
    i--; // subir al anterior del caracter nulo
    // mientras haya espacios sigo para atras
    while(str[i] == ' ')
    {
        i--;
    }
    // guardo index del ultimo caracter imprimible
    index_last = i;
    i = 0; // reset i. Empezamos desde el principio
    // mientras que hayan caracteres y el index sea menor que el ultimo char imprimible
    while(str[i] && i <= index_last) 
    {
        // al principio que se salte los espacios
        if (str[i] == ' ' && i == 0)
        {
            while(str[i] == ' ')
            {
                i++;
            }
        }
        // si el caracter es espacio, escribelo y saltate los demas espacios
        if (str[i] == ' ')
        {
            write(1, &str[i], 1);
            while(str[i] == ' ')
            {
                i++;
            }
        }
        // y al final del todo que no haya espacios (index_last)
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    
    if (argc == 2)
    {
        ft_epur_str(argv[1]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return(0);
}
