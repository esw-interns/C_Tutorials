#include <stdio.h>

#define NUMBERS 1, \
                2, \
                3
#define KR RK
#define RK 4
#define read(n) printf("Enter the value: ");   scanf("%d",&n);
#define print(x) printf("value is:%d\n",x);

int main(int argc, char **argv)
{
  //  int arr[]= {NUMBERS};
    int N,M,i;
    read(N);
    read(M);
    print(N);
    print(M);
  //  printf("%d,%d,%d\n\n",arr,arr[1],arr[2]);
  //  printf("%d,%d\n\n",KR,RK);
    return 0;
}