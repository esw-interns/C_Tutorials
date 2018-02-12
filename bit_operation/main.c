#include <stdio.h>

int main(int argc, char **argv)
{
    unsigned long int a1;
  //  printf("%d",sizeof(unsigned long long int));
  //  printf("%d",sizeof(unsigned long int));
unsigned long long int  a=0xf000000000000f00;
   unsigned long long int k = a>>8;
    printf("%b,%b,%p,%p",a,k,a,k);
    return 0;
}
