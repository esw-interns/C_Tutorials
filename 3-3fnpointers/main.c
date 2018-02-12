#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int (*fnptr)(int);

int add(int a){
    a+=a;
    return a;
    }
int mul(int a){
    a *=a;
    return a;
    }
int divs(int a){
    return a;
    }    

fnptr ptr[] = {add,mul,divs};

int main(int argc, char **argv)
{
    int n,i,result;
    printf("\nEnter the number to the corresponding operations: ");
    printf("[1]add, [2]mul, [3]div : ");
    again:scanf("%d",&n);
    if(n<0 || n>(sizeof(ptr)/sizeof(fnptr))){
        printf("\nout of range please try again: ");
        goto again;
    }
    
    else{
        printf("\nenter the number: ");
        scanf("%d",&i);
        result = ptr[n-1](i);
        printf("\n%d\n",result);
    }
    return 0;
}
