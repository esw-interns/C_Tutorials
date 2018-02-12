/*
#include <stdio.h>
#include <stdlib.h>

int* fun();

int main(){
    int a=3;
    int* ptr;
    ptr = &a;
    printf("%d\n",fun());
    }
    
    int* fun(){
        int a=6;
        int *p=&a;
        return *p;
        }*/

int main(int argc, char **argv)
{
    
    int r,c;
    printf("Enter c and r values: \n");
    scanf("%d %d",&c,&r);
    int *arr[r];
    for(int i=0;i<r;i++)
        arr[i]=(int*)malloc(c*sizeof(int));
        for(int j=0;j<r;j++){
            for(int i=0;i<c;i++){
                printf("enter the value: ");
                scanf("%d",&arr[j][i]);
                }
        }
                for(int i=0;i<r;i++){
                    for(int j=0;j<c;j++){
                        printf("%d ",arr[i][j]);
                                        }
                                        printf("\n");
                }
    return 0;
}
