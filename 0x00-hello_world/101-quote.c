#include <stdio.h>
/**
 * main - prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
    char str1[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    fwrite(2, str1, 59);
    return (1);
}
