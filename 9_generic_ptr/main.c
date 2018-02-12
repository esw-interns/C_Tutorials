
#include <stdio.h>

int main(int argc, char **argv)
{
  void* ptr;
  char* ptr1;
  int arr[]={1,2,3};
  char str[]="hello";
  
  ptr = arr;
  for(int i=0;i<3;i++){
    printf("%d\n",ptr);   
  printf("%d\n",*(int*)ptr);
 ptr = ptr + 4;
  }
  
  ptr = str;
printf("\n%s\n",(char*)ptr);
  for(int i=0;i<6;i++){
      printf("%d\n",ptr);
       printf("%c\n",*(char*)ptr);
        ptr = ptr + 1;
      }
      ptr = str;
      ptr1 = str;
  printf("\n%s\n",ptr1);
    return 0;
}
