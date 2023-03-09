#include <stdio.h>

/**
 * my_func - function declaration
 * @n: integer value
 * Return: int value
 */

int my_func(int n);

/**
 * main - entry point
 * Description: calls my_func
 * Return: Always 0
 */

int main(void)
{
	int n = 10;

	printf("%d", my_func(n));
	return (0);
}

/**
 * my_func - function definition
 * @n: integer value used recursion
 * Return: recusive value
 */

int my_func(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (1 + my_func(n - 1));
	}
}
