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
void rev_string(char *s)
{
int i = 0;
int j;
char temp;
int k;
while (s[i] != '\0')
{
i++;
}
k = i - 1;
for (j = 0; j < k; j++)
{
temp = s[k];
s[k] = s[j];
s[j] = temp;
k--;
}
}
