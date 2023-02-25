#include <stdio.h>

/**
 * main - entry point
 * Description: simple pointers program
 * Return: 0
 */

int main(void)
{
	int myAge = 27;
	int *myAgePtr = &myAge;

	printf("Our variable has value: %d\n", myAge);
	printf("myAge of value, %d is in address: %p\n", myAge, myAgePtr);
	printf("if we derefence myAgePtr, we get: %d\n", *myAgePtr);
	*myAgePtr = 28;

	printf("The new value is : %d\n", myAge);
	return (0);
}
