#include <unistd.h>

void ft_last_word(char *str)
{
    
    int i;
    int j;
    
    i = 0;
    j = 0;
    // if string is empty
    if (!*str)
    {
        write(1, "\n", 1);
    }
    else
    {
        // llegar al final del string
        while(str[i])
        {
            i++;
        }
        // aqui *str ya es el caracter nulo
        i--; 
        // volver hacia atras hasta el principio de la ultima palabra
        // si hay espacios los evito
        while(str[i] == 32)
        {
            i--;
        }
        // guardo el index del ultimo caracter a imprimir
        j = i;
        // mientras que sean caracteres imprimibles que siga hacia atras
        while(str[i] >= 33 && str[i] <= 126) 
        {
            i--;
        }
        i++; // avanza para no escribir el espacio
        // escribo la palabra hasta el ultimo indice j
        while(i <= j)
        {
            write(1, &str[i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_last_word(argv[1]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
