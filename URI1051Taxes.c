#include <stdio.h>

int main()
{
   float a,b,c,d,e,t,f;
   scanf("%f",&a);
   if(a>=0 && a<=2000.0)
   {
       printf("Isento\n");
   }
   else if(a>2000.00 && a<=3000.00)
   {
       a-=2000;
       t= a * .08;
        printf("R$ %.2f\n",t);
   }
   else if(a>3000.00 && a<=4500.0)
   {
        a=a - 2000.00;
        if(a<=1000.00)
        {
            t= a*.08;
            printf("R$ %.2f\n",t);
        }
        else
        {
            b = a - 1000.00;
            a = a-b;
            c = a*.08;
            d = b*.18;
            t =c+d;
            printf("R$ %.2f\n",t);
        }
        
   }
   else if (a>4500.00)
   {
    a=a-2000;
    d=a -2500;
    d=d*.28;
    c=1500*.18;
    b=1000*.08;
    t=b+c+d;
    printf("R$ %.2f\n",t);
   }
   
    return 0;
}
