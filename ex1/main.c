
#include <stdio.h>
int fun(int arr[]) {
   arr = arr+1; 
   printf("%d ", arr[0]);
}
int main(void) {
   int arr[2] = {10, 20,30,40};
   fun(arr);
   printf("%d", arr[0]);
   return 0;
}

/*
#include <stdio.h>
 
char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
char **cp[] = {c+3, c+2, c+1, c};
char ***cpp = cp;
 
int main()
{
    printf("%s ", **++cpp);
    printf("%s ", *--*++cpp+3);
    printf("%s ", *cpp[-2]+3);
    printf("%s ", cpp[-1][-1]+1);
    return 0;
}

/*
#include <stdio.h>
void f(char**);
int main()
{
    char *argv[] = { "ab", "cd", "ef", "gh", "ij", "kl" };
    f(argv);
    return 0;
}
void f(char **p)
{
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\n", t);
}

/*int f(int x, int *py, int **ppz) 
{ 
  int y, z; 
 // printf("")
  **ppz += 1; 
  printf("%d\n\n",x);
   z  = **ppz; 
     printf("%d\n\n",z);
  *py += 2; 
    printf("%d\n\n",x);
   y = *py; 
     printf("%d\n\n",y);
   x += 3; 
     printf("%d\n\n",x);
   return x + y + z; 
} 
  
void main() 
{ 
   int c, *b, **a; 
   c = 4; 
   b = &c; 
   a = &b; 
   printf("%d ", f(c, b, a)); 
   printf("%d\n",c);
   return 0;
}


/*#include<stdio.h>
void fun(int *arr,char* str)
{
  int i;
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  printf("%d\n\n",strlen(str));
  printf("sizeof array : %d\n",sizeof(arr));
  for (i = 0; i < arr_size; i++)
      printf("%d ", arr[i]);
}
 
int main()
{
  int i;
  char str[]= "hello";
  int arr[4] = {10, 20 ,30, 40};
  fun(arr,str);
  return 0;
} 








/*
#include<stdio.h> 
int main() 
{ 
   int a; 
   char *x; 
   x = (char *) &a; 
   a = 512; 
   x[0] = 1; 
   x[1] = 2; 
   printf("%d\n",a);   
   return 0; 
}


/*#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("Number of elements between two pointer are: %d.", 
                                (ptr2 - ptr1));
    printf("Number of bytes between two pointers are: %d",  
                              (double*)ptr2 - (double*) ptr1);
    return 0;
}*/