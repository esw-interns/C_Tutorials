#include <stdio.h>

typedef struct std {
    int roll;
    struct std *next;
    struct std *prev;
    }LINK2;

int main(int argc, char **argv)
{
    LINK2 *ptr,head;
    head.roll = 0;
    head.next = &head;
    head.prev = &head;
    
    for(int i=0;i<5;i++){
        ptr = malloc(sizeof(LINK2));
        ptr->roll = i;
        ptr->next = head.next;
        head.next = ptr;
        ptr->prev = &head;
        ptr->next->prev = ptr;
        
        }
        ptr= head.next;
        while(ptr != &head )
        {
            printf("fwd: ")
            }
    
    return 0;
}
