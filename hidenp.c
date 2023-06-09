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
    int i;
    int j;
    int found;
    int len;

    i = 0;
    j = 0;
    found = 0;
    len = ft_strlen(s1);
    while(s1[i])
    {
        while(s2[j])
        {
            if (s1[i] == s2[j])
            {
                found++;
                break;
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
