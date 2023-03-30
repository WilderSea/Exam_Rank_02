#include <stdio.h>
#include <stdlib.h>


// function to create every word
char *ft_create_word(char *str)
{
    char *word;
    int len;
    int i;
    // count the length of each word to reserve malloc
    i = 0;
    len = 0;
    while(str[i] && str[i] != 32) // primera palabra
    {
        i++;
        len++;
    }
    //printf("len first word: %d\n", len);
    //printf("str: %s\n", str);
    word = malloc(sizeof(char) * (len + 1));
    if (!word)
    {
        return (NULL);
    }
    // copiar cada letra para formar la palabra
    i = 0;
    while (i < len)
    {
        word[i] = str[i];
        //printf("str[i]: %c\n", str[i]);
        i++;
    }
    word[i] = '\0';
    printf("the word is: %s\n", word);
    return (word);
}


int ft_count_words(char *str)
{
    int words;
    int i;

    words = 0;
    i = 0;
    printf("%s\n", str);
    
    while(str[i])
    {
        // la primera palabra hay que contarla
        //if (i == 0 && (str[i] == 32 || str[0] == '\t'))
        if (i == 0 && str[i] != 32)
        {
            words++;
        }
        
        //if (str[i] == 32 || str[i] == '\t') 
        if (str[i] == 32) 
        {
            //while (str[i] == 32 || str[i] == '\t')
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

void ft_print_array(char **array)
{
    int i;

    i = 0;
    while (array[i])
    {
        printf("%s\n", array[i]);
        i++;
    }
}

char **ft_split(char *str)
{
    char **array;
    int num_words;
    
    int w;

    w = 0;
    num_words = ft_count_words(str);
    // count words to do malloc
    array = malloc(sizeof(char *) * (num_words + 1));
    
    if (!array)
    {
        return (NULL);
    }
    printf("num_words is: %d\n", num_words);
    // crear las palabras
    // mientras no lleguemos al total de palabras, las vamos creando
    printf("str: %s\n", str);
    // antes tener en cuenta que la frase puede empezar con espacios
    while(*str && *str == 32)
    {
        str++;
    }
    while (w < num_words)
    {
        array[w] = ft_create_word(str);
        w++;
        // aqui hay que avanzar el puntero para ir a la siguiente palabra
        // primero avanzamos sobre las letras para llegar al espacio
        while (*str && *str!= 32)
        {
            str++;
        }
        // y luego avanzamos sobre los espacios
        while (*str && *str == 32)
        {
            str++;
        }
        // y ya arriba, el str estará colocado al principio de la siguiente palabra, para enviarselo a create word
    }
    array[w] = "\0";
    ft_print_array(array);
    return (array);
}


int main(void)
{
    ft_split("  hay     que estudiar    y ya está");
    return (0);
}