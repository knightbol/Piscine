#include <stdio.h>
#include <stdlib.h>

#define INITIAL_SIZE 8

typedef struct {
	size_t size;
	size_t capacity;
	int  *array;
} dynamic_array;

void	arr_init(dynamic_array **arr_ptr)
{
	dynamic_array *container;
	
	container = (dynamic_array *)malloc(sizeof(dynamic_array));
	if (!container)  
	{
		printf("Memory Allocation Failed\n");
		exit(0);
	}
	container->size = 0;
	container->capacity = INITIAL_SIZE;
	container->array = (int *)malloc(INITIAL_SIZE*sizeof(int));
	if (!container->array)
	{
		printf("Memory Allocation Failed\n");
		exit(0);
	}
	*arr_ptr = container;
}

void	insertItem(dynamic_array* container, int item)
{
	if (container->size == container->capacity)
	{
		int *temp = container->array;
		container->capacity <<= 1; // doubles the capacity, bitwise
		container->array = realloc(container->array, container->capacity)
		if (container->array == NULL)
		{
			printf("Out of memory, no reallocation possible.\n");
			container->array = temp;
			return ;
		}
	}
	container->array[container->size++] = item;
}

int	getItem(dynamic_array *container, int index)
{
	if (index >= container->capacity)
	{
		printf("Index out of bounds.\n");
		return (-1);
	}
	return (container->array[index]);
}

void	updateItem(dynamic_array *container, int index, int item)
{
	if (index >= container->capacity)
	{
		printf("Index out of bounds.\n");
		return ;
	}
	container->array[index] = item;
}

void	deleteItem(dynamic_array *container, int index)
{
	int	i;
	if (index >= container->size)
	{
		printf("Index out of bounds.\n");
		return ;
	}

	i = index
	while (index < size -2)
	{
		container->array[i] = container->array[i + 1];
	}
	container->size--;
}
