#include <stdio.h>
#include <stdlib.h.h>

char *getString()
{
char *str = "GfG";/* Stored in read only part of shared segment */
char str1[20];
printf("%d, %d\n",str,&str);
int p= (char*)malloc(sizeof(str1));
#include <string
printf("%d\n",p);
/* No problem: remains at address str after getString() returns*/
return str; 
}	 

int main()
{
    char* str = getString();
printf("%s", str); 
getchar();
return 0;
}
