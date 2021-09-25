#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*
*
*
*
*
*/
int main(int argc, char *argv[])
{
int i;
int j;
int k;
int sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
j = atoi(argv[i]);
for (k = 0; k < j; k++)
{
if (*argv[i] < 48 || *argv[i] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
