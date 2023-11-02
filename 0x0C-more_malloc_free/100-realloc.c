#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _realloc - reallocates memory
 * @ptr: pointer to the memory
 * @old_size: old size
 * @new_size: new size
 * Return: pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem_new;
	char *ptr2, *b;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem_new = (malloc(new_size));
		if (mem_new == NULL)
			return (NULL);
		return (mem_new);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr2 = ptr;
	mem_new = malloc(sizeof(*ptr2) * new_size);

	if (mem_new == NULL)
	{
		free(ptr);
		return (NULL);
	}
	b = mem_new;

	for (i = 0; i < old_size && i < new_size; i++)
	{
		b[i] = *ptr2++;
	}

	free(ptr);

	return (mem_new);
}

