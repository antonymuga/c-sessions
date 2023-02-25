#include <stdio.h>

/**
 * main - entry point
 * Description: print 4D array of size 2
 * Return: 0
 */

int main(void)
{
	int a, b, c, d, array_size;
	int my_4d_array[2][2][2][2];

	array_size = 2;
	my_4d_array[0][0][0][0] = 1;
	my_4d_array[0][0][0][1] = 2;
	my_4d_array[0][0][1][0] = 3;
	my_4d_array[0][0][1][1] = 4;
	my_4d_array[0][1][0][0] = 5;
	my_4d_array[0][1][0][1] = 6;
	my_4d_array[0][1][1][0] = 7;
	my_4d_array[0][1][1][1] = 8;
	my_4d_array[1][0][0][0] = 9;
	my_4d_array[1][0][0][1] = 10;
	my_4d_array[1][0][1][0] = 11;
	my_4d_array[1][0][1][1] = 12;
	my_4d_array[1][1][0][0] = 13;
	my_4d_array[1][1][0][1] = 14;
	my_4d_array[1][1][1][0] = 15;
	my_4d_array[1][1][1][1] = 16;

	for (a = 0; a < array_size; a++)
	{
		for (b = 0; b < array_size; b++)
		{
			for (c = 0; c < array_size; c++)
			{
				for (d = 0; d < array_size; d++)
				{
					printf("%d", my_4d_array[a][b][c][d]);
					printf("\n");
				}
			}
		}
	}
	return (0);
}

