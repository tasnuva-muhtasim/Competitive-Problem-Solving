#include <stdio.h>

int main()
{
    int n,y,w,d,days;
    printf("Enter days : ");
    scanf("%d",&n);
    y = n/(365);
    days = n%=365;
    w = days/7;
    days = days %= 7;
    
    printf(" %d year,%d week, %d days",y,w,days);
    return 0;
}
