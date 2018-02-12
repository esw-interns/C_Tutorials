#include <stdio.h>
#include <stdlib.h>
#define num 4

#define read(n,m) printf("Enter the values of N and M : ");   scanf("%d %d",&n,&m);

typedef struct data{
    int a;
    int ar[num];
    char* s;
    }D;

int main(void){
     
     int N,M;
    read(N,M);
   // printf("%d",N);
    D *ptr[M];
    for(int i=0;i<N;i++)
    ptr[i] = (D*) malloc(N*M*sizeof(D));
    for(int i=0;i<N;i++){
        for(int k=0;k<M;k++){
            ptr[i][k].a = k;
            for(int j=0;j<num;j++){
                ptr[i][k].ar[j]=j;
                }
            ptr[i][k].s ="string";
            }
        }
      for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){ 
            printf("\nint a value is: %d",ptr[i][j].a);
            for(int k=0;k<num;k++){
                printf("\narray of ar[%d]:%d ",i,ptr[i][j].ar[k]);
                }
            printf("\nstring enterd is:%s ",ptr[i][j].s);
            printf("\n\n");
      }
      printf("\n\n");
      } 
    }



/*
int main(int argc, char **argv)
{
    int N,M;
    printf("enter N and M values:");
    scanf("%d%d",&N,&M);
    fflush(stdin);
    D s[N][M];
    
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            printf("\n\nEnter the a value of a: ");
            scanf("%d",&s[i][j]);
            fflush(stdin);
            for(int k=0;k<num;k++){
                s[i][j].ar[k] = k;
                }
            char str[20];
            printf("\nenter the string : ");
            fgets(str,20,stdin);
            fflush(stdin);
            s[i][j].s=str;
            }
    }
    
    return 0;
}
*/

