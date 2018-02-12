#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  // char str1[50];
  // char str2[50];
    char* str1 ;
    char* str2 ;
    char temp1[50];
    char temp2[50];
    char* ptr;
    
    printf("\nEnter the string1: ");
   fgets(temp1,50,stdin);
   int n1=strlen(temp1);
   printf("\n\n%d\n\n",n1);
    str1=temp1;
   //str1= (char*)malloc(sizeof(temp1));
  
   printf("\n\n%s",str1);
   
    printf("\nEnter the string2: ");
   fgets(temp2,50,stdin);
   int n2=strlen(temp2);
  // str2= (char*)malloc(sizeof(temp2));
   str2=temp2;
    printf("\n\n%s",str2);
   
   ptr = (char*)malloc(n1+n2-1);
   strncat(ptr,str1,n1);
   printf("\n%s",ptr);
   strncat(ptr,str2,n2);
   printf("\n%s",ptr);
     
    return 0;
}
