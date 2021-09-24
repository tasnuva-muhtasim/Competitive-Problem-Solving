#include <stdio.h>

int main()
{  float a,sal,b;
    int i;
    scanf("%f",&a);
   if (a>=0  && a<=400.00)
   {
    sal= a + (a*0.15);
    b=a*0.15;
    i=15;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",sal,b,i);
   }
    else if (a>400.00  && a<=800.00)
   {
    sal= a + (a*0.12);
    b=a*0.12;
    i=12;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",sal,b,i);
   }
    else if (a>800.00  && a<=1200.00)
   {
    sal= a + (a*0.10);
    b=a*0.10;
    i=10;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",sal,b,i);
   }
   else if (a>1200.00  && a<=2000.00)
   {
    sal= a + (a*0.07);
    b=a*0.07;
    i=7;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",sal,b,i);
   }
   else if (a>2000.00 )
   {
    sal= a + (a*0.04);
    b=a*0.04;
    i=4;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",sal,b,i);
   }
    return 0;
}
