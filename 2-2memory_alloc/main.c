#include <stdio.h>
#include <string.h>
#include <malloc.h>

char* string_function(char *str){
    char *s;
    s=(char*)malloc(100);
    s[0]=0;
    strcat(s,"hello ");
    strcat(s,str);
    strcat(s,"hii ");
    strcat(s,"\n");
    return s;
    }

int main(int argc, char **argv)
{
    printf(string_function("kantha rao "));
    printf(string_function("kantha "));
    return 0;
}
