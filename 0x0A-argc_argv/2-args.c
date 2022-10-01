#include <stdio.h>
#include <main.h>
/**
 * main - prints all the arguments a program receives.
 *
 * @argc: numiber of arguments
 *
 * @argv: array of arguments.
 * return: alawys (0) success.
 */
int main(int argc, char *argv[])
{
int n;
for (n = 0; n < argc; n++)
printf("%s\n", argv[n]);
return (0);
}
