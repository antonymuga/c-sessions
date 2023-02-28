#include <stdio.h>

/**
 * main - entry point
 * Description: simple pointers program
 * Return: 0
 */

int main(void)
{
    char myArr[2][3] = {{1,2,3},{4,5,6}};
    int myArr2[2];
    myArr2[0] = 28;
    int *myArr2Ptr = &myArr2;
    
	int myAge = 27;
	int *myAgePtr = &myAge;
	

	printf("Our variable has value: %d\n", myAge);
	printf("myAge of value, %d is in address: %p\n", myAge, myAgePtr);
	printf("if we derefence myAgePtr, we get: %d\n", *myAgePtr);
	*myAgePtr = 28;
	printf("myArr[0][1] is: %d\n", myArr[0][1]);
	printf("myArr2[0] is: %d\n", myArr2[0]);
	printf("myArr2Ptr is in address: %p\n", &myArr2);
	printf("The value in index 0 of myArr2[0] is: %p\n", &myArr2[0]);

	printf("The new value of myAge is : %d\n", myAge);
	return (0);
}
