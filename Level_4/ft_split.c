#include <stdlib.h>
#include <stdio.h>

char *ft_create_word(char *str)
{
    char *word;
    int len;
    int i;
    
    i = 0;
    len = 0;
    while(str[i] && str[i] != 32)
    {
        i++;
        len++;
    }
    word = malloc(sizeof(char) * (len + 1));
    if (!word)
    {
        return (NULL);
    }
    i = 0;
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}


int ft_count_words(char *str)
{
    int words;
    int i;

    words = 0;
    i = 0;
    while(str[i])
    {
        if (i == 0 && str[i] != 32)
        {
            words++;
        }
        if (str[i] == 32) 
        {
            while (str[i] == 32)
            {
                i++;
            }
            words++;
        }
        i++;
    }
    return (words);
}

/*void ft_print_array(char **array)
{
    int i;

    i = 0;
    while (array[i])
    {
        printf("%s\n", array[i]);
        i++;
    }
}*/

char **ft_split(char *str)
{
    char **array;
    int num_words;
    
    int w;

    w = 0;
    num_words = ft_count_words(str);
    array = malloc(sizeof(char *) * (num_words + 1));
    if (!array)
    {
        return (NULL);
    }
    while(*str && *str == 32)
    {
        str++;
    }
    while (w < num_words)
    {
        array[w] = ft_create_word(str);
        w++;
        while (*str && *str!= 32)
        {
            str++;
        }
        while (*str && *str == 32)
        {
            str++;
        }
    }
    array[w] = "\0";
    //ft_print_array(array);
    return (array);
}
