#include <stdio.h>

int main(int argc, char **argv)
{
	int *ptr;
    int num = 12;
    ptr = num;
    printf("%p,%p,%d\n",ptr,num,ptr);
    printf("%d,%d",ptr,&num);
	return 0;
}
