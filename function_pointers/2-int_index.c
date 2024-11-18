#include "function_pointers.h"
/**
 * int_index - look for index of the 1st array element matching a condition.
 * @array: pointer to the integer array to be searched.
 * @size: the numbers of elements in the array.
 * @cmp: pointer to the comparison function that defines the condition.
 * Return:index of the first element for which the comparison function works.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}
