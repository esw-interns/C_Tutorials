#include <stdio.h>

void main(int argc, char **argv)
{
    int in[] = {27,21};
    int kkr[]={2500, 3456, 64, 464, 7890, 123, 5556, 7778, 3456,34};
    int kr =123;
    
    printf("%ld, %ld\n",&in[0], &in[1]);
    printf("%d, %d, %d, %d,%d, %d, %d, %d , %d, %d, %d\n",kkr[8], kkr[9],kkr[10], kkr[11], kkr[12],kkr[13], kkr[14], kkr[15], kkr[16], kkr[17],kkr[18]);
    printf("%d %d %d %d %d %d\n",&kkr[0],&kkr[1],&kkr[2],&kkr[3],&kkr[4],&kr);
    
}
