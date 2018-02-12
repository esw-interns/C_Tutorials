#include <stdio.h>

int main(int argc, char **argv)
{
    int *ptr;
    int (*ptrr)[10];
    int arr[10];
    ptr = arr;
    ptrr = &arr;
    printf("%p,%p\n",ptr,ptrr);
    ptr++;
    ptrr++;
    printf("%p,%p\n",ptr,ptrr);
    return 0;
}
