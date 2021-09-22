#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Y;
    printf("Enter a year:");
    scanf("%d",&Y);
    if(Y%400 == 0)
    {
        printf("%d is a Leap Year",Y);
    }
    else if(Y%4==0 && Y%100!=0)
    {
       printf("%d is a Leap Year",Y);
    }
   else
   {
    printf("%d is not a leap Year",Y);
   }
   return 0;
}
