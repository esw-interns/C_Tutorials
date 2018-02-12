#include <stdio.h>

int main(int argc, char **argv)
{
    int size;
    char* s;
    
    size=sizeof("hello");
    printf("\n%d\n",size);
    
    s =(char*)malloc(size);
    if(s==0){
        printf("malloc don't work");
        exit(0);
    }
    strncpy(s,"hello",size);
    
    printf("\n%s\n",s);
    s[0]='k';
    printf("\n%s\n",s);
    
        
	return 0;
}
