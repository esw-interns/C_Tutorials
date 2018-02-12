#include <stdio.h>
#include <string.h>
#define num 5

typedef struct type{
    int arr[num];
    char a;
    double k;
    int ar;
    }head;

int main(){
    head kr;
    printf("%d\n",sizeof(head));
    
    return 0;
    }

/*
#include <stdio.h>
#include <stdlib.h>

struct data{
    int a;
    int b;
    
    }head = {12,13},*p=&head;

int main(){
    p->a=10;
    (*p).b = 12;
    printf("%d,%d\n\n",p->a,(*p).b);
    
    
    }

/*
int main(){
//    int a = 0x12345678;
 //   int *ptr;
 //   ptr=a;
  //  printf("%x\n\n",*ptr);
  //  ptr++;
    printf("%d\n\n",sizeof(int*));
    }
*/



/*
void fun(int **pptr)
{
  static int q = 10;
  *pptr = &q;
}

int main()
{
  int r = 20;
  int *p = &r;
  fun(&p);
  printf("%d", *p);
  return 0;
}


/*
#include <stdio.h>

int main(){
    int a[2][4]={{1,12,3,4},{1,23,4,2}};
    int (*ptr1)[4];
    int *ptr2[4];
    ptr1=a;
    //ptr1[0][1];
    printf("%d,%d,%d\n\n",a,ptr1,*(ptr1[0]+1));
    
    return 0;
    }



/*

#include <stdio.h>
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}day;
 
int main()
{
   // enum week day1;
    char str[20];
    day = Tue;
    printf("%d\n",day);
    return 0;
} */