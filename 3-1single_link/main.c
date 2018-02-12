#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(){
    
    int *ptr=6487608;
    printf("%d\n",*ptr);
    return 0;
    }*/

typedef struct items{
    struct items *nxt;
    int data;
    } link;

int main(int argc, char **argv)
{
    link *p1,*p2;
    p1=NULL;
  //  printf("p1 and p1 address: \n%d,%d\n",p1,&p1);
    
    
    for(int i=0;i<3;i++){
        p2=malloc(sizeof(link));
  //      printf(" p2 and p2 address: %d,%d\n",p2,&p2);
 //     printf("\n%d\n",sizeof(link));
        
           
        p2->nxt=p1;
  //      printf("p2 next:%d,%d\n",p2->nxt,&p2->nxt);
        printf("enter:\n");
        scanf("%d",&p2->data);
  //      printf("p2 data:%d\n",&p2->data);
        
        
 //    printf("p1 and p1 address: %d,%d\n",p1,&p1);
//    printf(" p2 and p2 address: %d,%d\n",p2,&p2);
        p1=p2;
  //      printf(" p2 and p2 address: %d,%d\n",p2,&p2);
 //       printf("p1 and p1 address: %d,%d\n",p1,&p1);
        
        }
  
   
        
       // p2=p1;
        while(p1!=0){
            printf("\n%d:\n%d:\n%d:\n",p1,p1->nxt,p1->data);
            p1=p1->nxt;
            } 
            
  free(p2);
  free(p1); 
   return 0;
}
