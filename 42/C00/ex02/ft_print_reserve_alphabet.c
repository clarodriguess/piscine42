#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char    count;
    
    count = 122;
    while (count >=97 && count <= 122)
    {
        write(1, &count, 1);
        count--;
    }
}

//main
int    main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}
