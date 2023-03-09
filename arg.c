#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int index, sum;
	printf("argc = %d\n", argc);
	printf ("Let's see what is in argv[]\n");
	for (index = 1; index < argc; index++)
	{
		printf("argv[%d] = %s\n", index, argv[index]);
		sum = sum + atoi(argv[index]);
	}
	printf("Total = %d\n", sum);

	return (0);
}
