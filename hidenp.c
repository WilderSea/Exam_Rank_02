#include <stdio.h>
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

void ft_hidenp(char *s1, char *s2)
{
    // strchr
    // find a char in string
    // cada vez que encuentre el char en el string, avanza al siguiente char
    int i;
    int j;
    int found;
    int len;

    i = 0;
    j = 0;
    found = 0;
    // contar caracteres del s1 para despues saber si los encontró todos
    len = ft_strlen(s1);
    while(s1[i])
    {
        //printf("%c\n", s1[i]);
        while(s2[j])
        {
            if (s1[i] == s2[j])
            {
                //printf("found %c\n", c);
                found++;
                break;
                // este break sale del while
                // y se viene al i++
                // y empiezo a buscar la siguiente letra del s1
            }
            j++;
        }
        i++;
    }
    if (found == len)
    {
        write(1, "1", 1);
    }
    else
    {
        write(1, "0", 1);
    }
    write(1, "\n", 1);
}


int main(int argc, char **argv)
{
    if (argc == 3)
    {
        ft_hidenp(argv[1], argv[2]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}
