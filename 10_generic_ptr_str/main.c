#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char* str[3];
    void* ptr;
    str[0]="kantha rao";
    str[1]="hii";
    str[2]="how are you";
   ptr = str;
  
  for(int i=0;i<3;i++){
        printf("%s\n",*(char**)ptr);
         printf("%d\n",ptr);
       ptr = (char**)ptr+1;
       printf("%d\n",ptr);
      }
    
    return 0;
}
