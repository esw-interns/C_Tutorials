#include <stdio.h>

long long int mask(int p,int w);
int main(int argc, char **argv)
{
    int bit_pos,m_width;
    long long int REG = 0xf544FFC2FE500063;
    printf("\n Enter the bit position and mask width (integers): ");
    scanf("%d %d",&bit_pos,&m_width);
    
    long long int mask1 = mask(bit_pos,m_width);
    
    printf("\n\nmask: %p\n\n",mask1);
    
  unsigned long long int result_f = REG & mask1;
    long long int result = result_f >> (bit_pos-1);
    printf("\n\nfinal value: %x\n\n",result);
    return 0;
}

long long int mask(int p,int w){
  unsigned long long int kr = 0xffffffffffffffff;
   unsigned long long int num;
    num = kr>>(p-1);
    
   // printf("\n\n%p,%p\n\n",num,kr);
   
    num = num<<(64-w);
    
//    printf("\n\n%p,%p\n\n",num,kr);

    num = num>>(64-p-w+1);
    
//    printf("\n\n%p,%p\n\n",num,kr);

    return num;
    }