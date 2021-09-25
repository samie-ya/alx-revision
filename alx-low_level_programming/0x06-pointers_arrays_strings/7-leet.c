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
*/
char *leet(char *s)
{
int i = 0;
int n;
char a[] = {'A', 'E', 'O', 'T', 'L'};
char b[] = {'4', '3', '0', '7', '1'};
while (s[i] != '\0')
{
for (n = 0; n < 5; n++)
{
if (s[i] == a[n] || s[i] == a[n] + 32)
{
s[i] = b[n];
}
}
i++;
}
return (s);
}
