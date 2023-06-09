#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nii)";
	if (d->owner == NULL)
		d->owner = "(nii)";

	printf("name: %s\nAge: %f\nOwner: %s\n" ,d->name, d->age, d->owner);
}
