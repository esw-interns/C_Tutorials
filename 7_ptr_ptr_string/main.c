#include <stdio.h>

int main(int argc, char **argv)
{
    char* strings[3];
    char *ptr;
    char **pptr;
    
    strings[0]="hello";
    strings[1]="kantha rao";
    strings[2]="how are you";
    
  //  printf("\"K\" \n");
    
    pptr = strings;
    printf("%p,%p \n",pptr,strings);
    for(int i=0;i<3;i++){
        pptr = strings+i;
        ptr = *pptr;
        while(*ptr !=0){
            printf("%c ",*ptr);
            ++ptr;
            }
            printf("\n");
        }
    return 0;
}
