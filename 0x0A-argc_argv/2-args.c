#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */
int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
