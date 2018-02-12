#include <stdio.h>

int main(int argc, char **argv)
{
    int num1=10;
    int *ptr = &num1;
    int num2;
   num2 = *ptr;
   
    printf("%d,%d,%d\n",&num1,ptr,num2);
    printf("%d, %d\n",num1,ptr);
    
    return 0;
}
