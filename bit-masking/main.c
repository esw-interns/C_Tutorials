#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
  long long int  REG = 0x5544FFC2FE500063;
  long long int md,me,mf;
  long long int result_d,result_e,result_f;
  mf = 0x7f;
  me = 0x3f800;
  md = 0x1fc000;
   result_f = REG & mf;
   result_e = REG & me;
   result_d = REG & md;
   
   printf("%p\n%p\n%p\n",result_d,result_e,result_f);
  
  return 0;
}
