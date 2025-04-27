#include<stdio.h>
int main(){
    int even=0,odd=0,pos=0,neg=0,n,i;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        int num;
        scanf("%d",&num);
        if(num%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
        if(num>0)
        {
            pos++;
        }
        else if(num<0)
        {
            neg++;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    
    return 0;
}
