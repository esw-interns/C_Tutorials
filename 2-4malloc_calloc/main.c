#include <stdio.h>

int main(int argc, char **argv)
{
    char* s;
    int * n;

    s=(char*)calloc(6,sizeof(char));
        for(int i=0;i<6;i++){
            printf("s[%d]:%d\n",i,s[i]);
            }
            free(s);
        printf("\n\n");
        
      n=(int*)calloc(6,sizeof(int));
        for(int i=0;i<6;i++){
            printf("s[%d]:%d\n",i,n[i]);
            }       
            free(s);
              printf("\n\n");
            
            s=(char*)malloc(6);
        for(int i=0;i<6;i++){
            printf("s[%d]:%d\n",i,s[i]);
            }
            free(n);
            printf("\n\n");
            
	return 0;
}
