#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
int i = 0;

while (alphabet[i] != '\0')
{
putchar(alphabet[i]);
i++;
}

return (0);
}
