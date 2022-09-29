#ifndef MAIN_H
#define MAIN_H
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
void _print_rev_recursion(char *s);
void _puts_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
int is_palindrome(char *s);
int wildcmp(char *s1, char *s2);

#endif
