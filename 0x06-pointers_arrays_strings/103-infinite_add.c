#include "main.h"

/**
 * infinite_add - function that return pointer to character.
 * @n1: num1
 * @n2: num2
 * @r: buffer that the function will use to store the result.
 * @size_r: the buffer size.
 *
 * Description: function that adds two numbers.
 *
 * Return: r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, larger = 0, digit_n1, digit_n2, carry = 0;

	while (n1[i] != '\0')			/* i to null index */
		i++;
	while (n2[j] != '\0')			/* j to null index */
		j++;
	larger = (i > j) ? i : j;			/* larger number between n1[] & n2[] */
	if (larger + 1 > size_r)		/* if (larger + null  >  size number) return 0 */
		return (0);
	r[larger] = '\0';			/* last index of result = null */
	for (k = larger - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			digit_n1 = n1[i] - '0';		/* string to integer */
		else
			digit_n1 = 0;
		if (j >= 0)
			digit_n2 = n2[j] - '0';
		else
			digit_n2 = 0;
		r[k] = (digit_n1 + digit_n2 + carry) % 10 + '0';
		carry = (digit_n1 + digit_n2 + carry) / 10;
	}
	if (carry == 1)				/* if there's carry at the end of addition process */
	{
		r[larger + 1] = '\0';
		if (larger + 2 > size_r)
			return (0);
		while (larger >= 0)
		{
			r[larger + 1] = r[larger];
			larger--;
		}
		r[0] = carry + '0';
	}
	return (r);
}
