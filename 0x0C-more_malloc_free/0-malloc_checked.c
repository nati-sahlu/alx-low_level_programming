#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates the process with a status of 98.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr;

    ptr = malloc(b);  /* Attempt to allocate memory */

    if (ptr == NULL)  /* Check if malloc failed */
    {
        exit(98);  /* Terminate the process with status 98 */
    }

    return ptr;  /* Return the pointer to the allocated memory */
}

