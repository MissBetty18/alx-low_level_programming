#include "main.h"
/**
 * _pow_recursion - returns value of x raised to y
 *
 * @x: base number
 * @y: exponent
 *
 * Return: -1 if y < 0 , 1 if y = 0 ,and x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
