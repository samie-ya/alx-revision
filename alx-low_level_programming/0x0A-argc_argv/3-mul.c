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
int res;
if (argc > 2)
{
for (i = 0; i < argc; i++)
{
j = atoi(argv[1]);
k = atoi(argv[2]);
res = j *k;
}
printf("%d\n", res);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
