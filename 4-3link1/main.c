#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct std{
    struct std *next;
    char name[20];
    int id
    } LINK;


int main(int argc, char **argv)
{
    LINK *p1,*p2;
    int n;
    p2=0;
    printf("\n Enter the number of persons details you want to store in the linked list: ");
    fflush(stdin);
    scanf("%d",&n);
    char str[n][20];
    for(int i=0;i<n;i++){
        p1=malloc(sizeof(LINK));
        printf("\n Enter the name of the person(%d): ",i+1);
        fflush(stdin);
        gets(p1->name);
        fflush(stdin);
        printf("\n Enter the id of %s: ",p1->name);
        fflush(stdin);
        scanf("%d",&p1->id);
        p1->next = p2;
        p2 = p1;
        }
        
        while(p2!=0){
            printf("\n name is :%s\nid is: %d\nnext addr is:%d\npresent addr is:%d\n\n",p2->name,p2->id,p2->next,p2);
            p2=p2->next;
            
            }
        
    
    return 0;
}
