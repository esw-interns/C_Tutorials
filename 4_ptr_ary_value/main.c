#include <stdio.h>

int main(int argc, char **argv)
{
   char str1[] = "aello";
   char *str2 = "w";
    
   // int str1[] = {1,2,3,4};
  //  int *str2 = {1,2,3,6};
    //str2=str1;
    printf("%d,%c\n",str1,str1);
    printf("%d,%s\n",&str2,str2);
    return 0;
}
