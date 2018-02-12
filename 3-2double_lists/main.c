#include <stdio.h>

typedef struct list{
    struct list* next;
    struct list* prev;
    int data;
    }lists;

int main(int argc, char **argv)
{
 
    lists *ptr,head;
 //   printf("size of struct: %d \n",sizeof(lists));
 //   printf("addres of ptr: %d,addres of head: %d\n",&ptr,&head);
    
    head.next = (lists*)&head;
    printf("addres of head: %d,%d\n",head.next,&head);
    
    head.prev = (lists*)&head;
    printf("addres of head: %d,%d\n",head.prev,&head.prev);
    
    head.data = 0;
    for(int i=0;i<4;i++){
        ptr = malloc(sizeof(lists));
        printf("%d\n",ptr);
        
        ptr->data = i;
        printf("%d\n",&ptr->data);
        ptr->next = head.next;
        head.next = ptr;
        ptr->prev = &head;
        ptr->next->prev = ptr;
     
        }
    

	return 0;
}
