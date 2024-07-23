#include <stdlib.h>
	#include "dog.h"
/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 *
 * Description: This function frees the memory allocated for a struct dog,
 * including its name & owner strings.If the pointer to the struct dog is NULL,
 * the function does nothing.
 */
	void free_dog(dog_t *d)
	{
		if (d)
		{
			free(d->name);
			free(d->owner);
			free(d);
		}
	}
