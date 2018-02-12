#include <stdio.h>
#include <string.h>

typedef struct student{
     int a;
     int b;
     double c;
     long long int d
     }s;

int main(int argc, char **argv)
{
   
    s *p,*q;
    void* v;
    
    printf("%d\n",sizeof(s));
    
    p=(s*)calloc(4,sizeof(s));
    
    for(int i=0;i<4;i++){
        p[i].a =20+i;
        p[i].b = 40+i;
       p[i].c = 12+i;
        p[i].d = 12345600+i;
        }
       q=p;  
      printf("%d, %d, %lf, %lld\n",p->a,p->b,p->c,p->d);
        printf("%d, %d, %d, %d\n",&p->a,&p->b,&p->c,&p->d); 
        
        q=p+3;
              printf("%d, %d, %lf, %lld\n",q->a,q->b,q->c,q->d);
        printf("%d, %d, %d, %d\n",&q->a,&q->b,&q->c,&q->d); 
        
        printf("\n\n");
        v=p+3;
        for(int i=0;i<5;i++){
            printf("v[%d]:%d\n",i,((int*)v)[i]);
            }
        
	return 0;
}
