#include <unistd.h>


void print_bits(unsigned char octet)
{
    int i; // contador para pasar por cada bit
    unsigned char bit;

    i = 7; // para ir desde izq a derecha

    // bucle para pasar por cada bit
    while (i >= 0)
    {
        bit = (octet >> i & 1) + '0'; // comparacion para sacar resultado 0 ó 1 de cuanto vale ese bit
        // + '0' porque el bit para hacer write tiene que ser tipo char
        write(1, &bit, 1);
        i--; 
    }    
}


int main(void)
{   

    print_bits(10);

    return (0);
}
