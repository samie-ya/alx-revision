#include "main.h"
/**
*
*
*
*
*
*
*
*
*
*
*/
int _strcmp(char *s1, char *s2)
{
if (*s1 == *s2)
{
s1++;
s2++;
return (0);
}
else
{
return (*s1 - *s2);
}
}
