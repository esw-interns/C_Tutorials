#include <stdio.h>

int main(int argc, char **argv)
{
    int *ptr;
    int **pptr;
    int n;
    
    n=100;
    ptr = &n;
    pptr = ptr;
    printf("%d,%d,%d \n",&n,ptr,pptr);
    
    printf("enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++){
        printf("Enter array elements a[%d]: ",i);
        scanf("%d",&a[i]);
        }
        
    for(int i=0;i<n;i++){
        printf("a[%d]:%d \n",i,a[i]);
        }
        
        ptr = a;
        pptr = &ptr;
       for(int i=0;i<n;i++){
           printf("%d  %d %d %d %d \n",&a[i], ptr,*ptr, *pptr,**pptr);
           ptr ++;
           } 
        
    return 0;
}
