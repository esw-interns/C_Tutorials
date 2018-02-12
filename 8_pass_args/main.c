#include <stdio.h>

int main(int argc, char **argv)
{
    for(int i=0;i<argc;i++){
        printf("arg %d is %s\n",i,argv[i]);
        }
        
        printf("\n\n");
        for(int i=0;i<argc;i++){
        printf("arg %d is %s\n",i,*argv);
        argv++;
        }
        
        char* data[2];
       
    // data[0]=  {'f','e','\0'};
     data[0]=  "hello";
     data[1]="shf";
        
        printf("%d,%d,%d,%s,%d\n",data,&data[0],&data,data[0],&data[1]);
        
	return 0;
}
