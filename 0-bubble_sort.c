#include "sort.h"

/**
 *bubble_sort - function that sorts an array of integers
 *@array: pointer to an array of unsorted integers
 *@size: the size of array
 *
 *Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	int num = 0;
	int swap = 0;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swap++;
				print_array(array, size);
			}
		}

		if (swap > num)
			num = swap;
		else
			break;
	}

}
