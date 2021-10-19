#include <stdio.h>
/**
*
*
*
*
*
*/
int main(void)
{
int i;
long int j = 1;
long int k = 2;
long int l = j + k;
printf("%ld, %ld, ", j, k);
for (i = 3; i <= 50; i++)
{
printf("%ld", l);
j = k;
k = l;
l = j + k;
if (i != 50)
{
printf(", ");
}
}
printf("\n");
return (0);
}
