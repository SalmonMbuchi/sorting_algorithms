#include <stdio.h>

/**
 * swap - swaps two elements
 * @x: first element
 * @y: seconde element
 */
void swap(&int x, &int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}
