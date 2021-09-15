#include <stdio.h>
 
int main() 
{
 
    
     int NUMBER,hours;
     
     float Amount,SALARY;
  
     scanf("%d %d %f",&NUMBER,&hours,&Amount);
     
     SALARY = Amount*hours;
  
     printf("NUMBER = %d\n",NUMBER);
     printf("SALARY = U$ %.2f\n",SALARY);
 
    return 0;
}
