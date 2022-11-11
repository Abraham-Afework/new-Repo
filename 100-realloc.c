#include"main.h"
#include<stdlib.h>
/*
 * _relloc - function that relocates a memory block using malloc
 *
 *@ptr: the old memory block  memory address
 *@old_size: the old memory size allocated 
 *@new_size: the new memory size to be allocated 
 *
 *Return: new_size equals old_size it returns ptr
 *	  If new_size is equal to zero, and ptr is not NULL,Return NULL
 *	  new relocated memory if the old size greater than new size 
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{ 
	unsigned int i;
	char *oldloc, *newloc;

	oldloc = ptr;

	if(ptr == NULL)
	{

        ptr = malloc(new_size);
        return (ptr);

	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		newloc = malloc(sizeof(char)* new_size);
	}

	for(i=0;i <= old_size; i++)
	{
		newloc[i] = oldloc[i];
	}
	
	free(ptr);
	return (newloc);
}
