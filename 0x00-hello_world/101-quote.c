#include <stdio.h>
#include <stdlib.h>
/**
 * main - print "and that piece of art is useful" - Dora korpar, 2015-10-19
 * Return: 1 if the art is not
 */
int main(void)
{
write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
