#include <stdio.h>
/**
 * main - Prints the number of arguments passed into main
 *
 * @args: Number of command line arguments
 * @argv: Array name
 *
 * Return: 0
 *
 */
int main(int args, char *argv[])
{
printf("%d\n", args - 1);
(void)argv;
return (0);
}
