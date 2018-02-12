/*
#include <stdio.h>

int main(int argc, char **argv)
{
   char *str3 = "testtest\n"; 
   char *str2 = "w";
   char str1[] = "hello";
   

   // int str1[] = {1,2,3,4};
  //  int *str2 = {1,2,3,6};
    //str2=str1;
    printf("%d,%c\n",str1,str1);
    printf("%d,%c\n",str2,str2);
     printf("%d,%c\n",str3,str3);
    return 0;
}
*/


#include <stdio.h>
#include <string.h>
#define num 5

typedef struct type{
   
int as[num];//20
 int p;//4
    int a;//4
    double b;//8
    char c;//1
 //   int as[num];//20
    char* e;//8
    }head;

int main(){
     head *ptr;
     ptr=(head*)malloc(sizeof(head));
     printf("p:%d\n a:%d\n b:%d\n c:%d\n as:%d\n e:%d\n",&ptr->p,&ptr->a,&ptr->b,&ptr->c,&ptr->as[0],&ptr->e);
    printf("%d\n",sizeof(head));
    
    return 0;
    }