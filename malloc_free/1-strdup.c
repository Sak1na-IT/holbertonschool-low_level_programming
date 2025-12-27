#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated copy of a string
* @str: the string to duplicate
*
* Return: pointer to the duplicated string\NULL if str = NULL\malloc fails
*/
char *_strdup(char *str)
{
char *copy;
int i, len;

if (str == NULL)
return (NULL);

len = 0;
while (str[len] != '\0')
len++;

copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);

for (i = 0; i <= len; i++)
copy[i] = str[i];

return (copy);
}
