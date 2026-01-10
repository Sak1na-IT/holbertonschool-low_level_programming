#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int len_name, len_owner;

if (name == NULL || owner == NULL)
return NULL;

d = malloc(sizeof(dog_t));
if (d == NULL)
return NULL;

len_name = strlen(name) + 1;
d->name = malloc(len_name);
if (d->name == NULL)
{
free(d);
return NULL;
}
strcpy(d->name, name);

len_owner = strlen(owner) + 1;
d->owner = malloc(len_owner);
if (d->owner == NULL)
{
free(d->name);
free(d);
return NULL;
}
strcpy(d->owner, owner);

d->age = age;

return d;
}
