#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of the array.
 * @array: pointer to the array.
 * @size: number of elements on the array.
 * @action: pointer to the function to execute on each element.
 * Return: nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

		if (array != NULL && action != NULL && size > 0)
	{

			while (i < size)
			{
				action(array[i]);
				i++;
			}
	}

}
