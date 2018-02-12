#include <stdio.h>

int main(int argc, char **argv)
{
    //char *str;
    int n;
	printf("number of persons: ");
    fflush(stdin);
    scanf("%d",&n);
    
    char* names[n];
    char* copy[3];
   // char *fptr;
    char name[n][20];
    char kr[3][20];

    
    for(int i=0;i<n;i++){
    fflush(stdin);
    printf("\nenter the string[%d]: ",i+1);
    gets(name[i]);
 //   printf("\naddres of name: %s\n",name[i]);
    names[i] = name[i];
    }
    
    for(int i=0;i<n;i++){
        printf("\n\n%s\n\n",names[i]);
        }
    
  /*  for(int i=0;i<3;i++){
    fflush(stdin);
    printf("\nenter the string[%d]: ",i+1);
    gets(kr[i]);
 //   printf("\naddres of name: %s\n",kr[i]);
    copy[i] = kr[i];
    }
    
    
    
    for(int i=0;i<3;i++){
        
        for(int j=0;j<n;j++){
            
            printf("\n\n%s\n%s\n\n",copy[i],names[j]);
            
            if(*copy[i]==*names[j]){
                printf("sucess\n\n");
                }
            else
            printf(" ");
            }
    
    
    }
  /*  names[i]=fptr; 
    printf("\n %d,%d \n",names[i],&names[i]);
    printf("above entered string is: %s\n\n",names[i]);
    
    
    fptr++;
    }
    
    
    fptr = names;
    printf("\n%d\n\n",fptr);
    
//below for loop is used to axis the group members names one bye one but it takes the last name only
    for(int i=0;i<n;i++){
        printf("for loop to axis one bye one: %s\n",names[i]);
        }*/
	return 0;
}