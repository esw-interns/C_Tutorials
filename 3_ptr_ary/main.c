#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    


    char str[200]="Kantha Rao Bora";
    printf("%d, %d, %d, %d\n",str,&str,str[0],&str[1]);
    
   // char str[] == char *str;
    int arr[4]= {20,34,21,34};
    printf("%x, %d, %d, %d\n",arr,&arr,&arr[0],&arr[1]);
    return 0;
    
    /* This is equivalent to char str[6]
     * &str[0] or str both are same.....The name itself 
     * is a pointer to the first element.
     * 
     * str[0] however is the first element...
     * str[1] is the secondth element...and so on
     * str[4] is 'o' --> when you say printf("%d",str[4]), the compiler expects an integer.....
     * 'o' is what in ASCII ??? look up....lowercase 'o'
     * 
     * */
     

}
