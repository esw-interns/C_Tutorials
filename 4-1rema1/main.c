#include <stdio.h>
#include <string.h>

void str_reverse(char str[] ,int n); 
   
int main(int argc, char **argv)
{
    char str[200];
    printf("enter the string: ");
    fgets(str,200,stdin);
    int n =strlen(str);
    str_reverse(str,n);
    return 0;
}

void str_reverse(char str[] ,int n){
    char ch;
    int i;
    for(i=0;i<n/2;i++){
        ch = str[i];
        str[i] = str[n-i-1];
        str[n-i-1]=ch;
        }
        str[n]='\0';
        printf("%s\n",str);
}
