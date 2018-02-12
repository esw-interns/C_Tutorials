#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    int n,i;
    char* s;
    n=sizeof("hello");
    s=(char*)malloc(n);
   // s[0]=0;
 //   strcat(s,"hello");
    strncpy(s,"hello",n);
    
    realloc(s,2);
    strncpy(s,"hello",n);
    strcat(s," world");
    printf("%s\n",s);
    free(s);
	return 0;
}
