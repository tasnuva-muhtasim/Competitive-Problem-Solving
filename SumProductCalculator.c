
#include <stdio.h>
int main()
{
    int a,b,c ;
    printf("Input Two Number\n");
    scanf("%d",&a );
    scanf("%d" ,&b );
    printf("For addition input 1 and for substraction input 0\n");
    scanf("%d",&c);
    if(c==1)
    {
        int sum;
        sum = a + b;
        printf("sum = %d",sum);
    }
    else
    {
        int Sub;
      Sub = a-b;
        printf("Sub = %d",Sub);
    }
    return 0;
}


