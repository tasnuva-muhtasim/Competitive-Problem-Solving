#include <stdio.h>
#include <stdlib.h>
int main()
{
    float w1,w2,a;
    printf("Enter Your Weight :");
    scanf("%f",&w1);
    a = 0.17;
    w2 = w1*a;

    printf("Your Weight in moon is %f\n",w2);

    return 0;
}

