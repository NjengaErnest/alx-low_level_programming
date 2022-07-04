#include<stdio.h.
/**
 * main - enty point
 *
 * Return: always 9 (success/correct
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;

else if (alphabet == 'e')
continue;

putchar(alphabet);
}

putchar('\n');
return (0);
