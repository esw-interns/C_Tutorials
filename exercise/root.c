#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fun(){
    printf("first function in root.c\n");
    }

typedef struct student{
    char name[50];
    int id
    } STD;

int main()
{
    STD kr = {"kr",123};
	printf("%s,%d\n\n",kr.name,kr.id);
    fun();
	return 0;
}
