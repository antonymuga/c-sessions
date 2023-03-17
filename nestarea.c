#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/**
 * main - entry point
 * @base1: 1st base
 * @base2: 2nd base
 * @height1: 1st height
 * @height2: 2nd height
 * Description: calls max_tri_area()
 * Return: 0
 */

float max_tri_area(float base1, float height1, float base2, float height2);

int main(void)
{
	max_tri_area(5, 10, 15, 20);
	return (0);
}
/**
 * max_tri_area - compare triangle areas
 * @base1: 1st base
 * @base2: 2nd base
 * @height1: 1st height
 * @height2: 2nd height
 * Return: result
 */

float max_tri_area(float base1, float height1, float base2, float height2)
{
/**
 * tri_area - calculate area
 * @base: triangle base
 * @height: triangle height
 * Return: area
 */

	float tri_area(float base, float height)
	{
		float area = (base * height * 0.5);

		return (area);
	}
	float area1 = tri_area(base1, height1);
	float area2 = tri_area(base2, height2);

	if (area1 > area2)
	{
		printf("Area 1  is %.2f & larger than area 2, %.2f", area1, area2);
	}
	else
	{
		printf("Area 2 is %.2f & larger than area 1, %.2f", area2, area1);
	}
}
