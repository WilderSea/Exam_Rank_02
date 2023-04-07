/* the least common multiple of two or more numbers, is the smallest number (not counting 0)
which is multiple of all these numbers */

unsigned int lcm(unsigned int a, unsigned int b)
{
    int largest;
    
    if (a == 0 || b == 0)
    {
        return (0);
    }
    if (a > b)
    {
        largest = a;
    }
    else
    {
        largest = b;
    }
    while(1)
    {
        if (largest % a == 0 && largest % b == 0)
        {
            return (largest);
        }
        else
        {
            largest++;
        }
    }
}
