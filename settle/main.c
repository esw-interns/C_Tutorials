//this code is for settle individual money among the group

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n,inv ;

    printf("@ Hello! Welcome to the settlement @ \n\n");
    
    printf("Enter the number of persons in the room/hostel/house: ");
    scanf("%d",&n);                         
    
    char temp[n][20];
    char* names[n];       //creating array of string pointers sizeof group
    
    for(int i=0;i<n;i++){              //taking the names of the group
        fflush(stdin);
        printf("\nEnter the name of the person(%d):",i+1);
        gets(temp[i]);
        names[i]= temp[i];
        }
    
    printf("\nEnter the no.of persons involved in the expensives: ");
    scanf("%d",&inv);                    //getting the no.of persons involved in the expensives among the group.
    
    char* involved[inv];
    char str[inv][20];
    int money[inv];
     
      
    for(int i=0;i<inv;i++){     //taking the name of the person who involved in the expensives and his contribution
        
     fflush(stdin);
    printf("\nEnter the name of the person(%d): ",i+1);
    gets(str[i]);
    involved[i]=str[i];
    
    printf("\nMoney spent by %s: ",involved[i]);
    scanf("%d",&money[i]);
    }
   
   long int sum=0;
    for(int i=0;i<inv;i++){
    sum += money[i];
    }                           //adding all the money spent by the some of the group members
    printf("\nsum of the money spent by %d member/s:%ld \n",inv,sum);
    
    double div;
    div =(double) sum/n;        //calculating individual amount for all the persons in the group.
    printf("Money per person:%lf \n\n",div);
   
   //checking the paid persons names with the  rest of the persons  
   
 for(int j=0;j<inv;j++){
        for(int i=0;i<n;i++){

            if(*involved[j] == *names[i]){      
             double rem;
               rem =(double) div-money[j];     //calculating the remaing amount of money of the already paid guy will paid or got. 
               if(rem<0){
                   printf("Remaing amount %s got is:%lf \n\n",involved[j],-rem);
                        }
               else{ 
                    printf("%s has to pay:%lf \n",involved[j],rem);
                   }
                                        }  
            }
        }
    printf("Rest of the persons should pay: %lf\n\n",div);
    return 0;
}