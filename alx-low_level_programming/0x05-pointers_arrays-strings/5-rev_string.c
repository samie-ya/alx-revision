#include "main.h"
/**
*
*
*
*
*/
void rev_string(char *s)
{
int i = 0;
int j;
int k;
char temp;
while (s[i] != '\0')
{
i++;
}
k = i - 1;
for (j = 0; j < k; j++)
{
temp = s[j];
s[j] = s[k];
s[k] = temp;
k--;
}
}
