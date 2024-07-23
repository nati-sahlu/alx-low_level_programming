#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 *
 * Description: This function prints the details of a struct dog. If any of the
 * members of the struct dog are NULL, it prints "(nil)" instead of the actual
 * value. If the pointer d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
