

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[]="hello";
    char* str1 = "hello";
    int *ptr;
    int p =(int*)malloc(sizeof(int));
    printf("%d,%d,%d,%d\n",&str[0],str1,p,&ptr);
    free(p);
    //free(str1);
    }

/*
#include <stdio.h>
int main(int argc, char **argv)
{
//	char* string[3];
    
    int *ptr ;
    int a=4;
    ptr = a;
   char string[]={'h','e','l','l','o'};
   // string[0]="kantha rao";
   // string[1]="hii";
  //  string[2]="how are you";
  printf("%s",string);
  printf("%d",*ptr);
  //  printf("%s, %s, %s \n",string[0],string[1],string[2] );
	return 0;
}
*/