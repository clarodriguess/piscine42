#include <unistd.h>  // Para utilizar a função write

// Função que exibe o caractere passado como parâmetro usando write
void ft_putchar(char c) 
{
    write(1, &c, 1);  // Escreve o caractere 'c' no descritor de arquivo 1 (stdout)
}

int main(void) 
{
    ft_putchar('a');  // Chamada da função com o caractere 'a'
}