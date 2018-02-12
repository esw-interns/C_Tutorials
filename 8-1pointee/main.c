#include <stdio.h>

int* kr(){
    int num[] = {200,300};
    krr(&num);
    printf("%d\n\n",*num);
    return &num;
    }
void krr(int *ptr){
  //  int* ptr;
 //   int arr[] = {3,4,5};
//    int num = 500;
  //  ptr = kr();
    *ptr = *ptr  + 1;
    }



int main(int argc, char **argv)
{
    int n = 100;
    kr();
    printf("%d\n\n\n",kr());
    //printf("n value is: %d\n",krr());
  //  kr();
  //  krr();
   //   printf("n value is: %c\n",*krr());
    //  printf("n value is: %c\n",*krr());
	return 0;
}
