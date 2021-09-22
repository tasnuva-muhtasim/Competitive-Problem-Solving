#include <stdio.h>
 
int main()
{
    int a,b,UNIT1,UNIT2;
    float P1,P2,AMOUNT;
    scanf("%d %d %f %d %d %f",&a,&UNIT1,&P1,&b,&UNIT2,&P2);
    AMOUNT = ((UNIT1*P1)+(UNIT2*P2));
    printf("VALOR A PAGAR: R$ %.2f\n",AMOUNT);
    return 0 ;
}
