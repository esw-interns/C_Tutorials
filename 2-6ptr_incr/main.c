#include <stdio.h>
#include <string.h>


int a[3];
float b[3];
double c[3];
long long int d[3];
short int e[3];
long int f[3];
long double g[3];

int main(int argc, char **argv)
{
    int* pa;
    float* pb;
    double* pc;
    long long int* pd;
    short int* pe;
    long int* pf;
    long double* pg;
    
    printf("%d %d %d %d %d %d %d :",sizeof(int) ,sizeof(float),sizeof(double),sizeof(long long int),sizeof(short int),sizeof(long int),sizeof(long double)     );

    pa=a;pb=b;pc=c;pd=d;pe=e;pf=f;pg=g;
    
  //  printf()
    return 0;
}
