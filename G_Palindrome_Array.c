#include<stdio.h>
int main(){
    int d;
    scanf("%d",&d);
    int a[d];
    int flag=0;
    for (int i = 0; i < d; i++)
    {
        /* code */
        scanf("%d ",&a[i]);
    }
    for (int i = 0; i < d; i++)
    {
        for (int j = d-1; i >=0; j--)
        {
            /* code */
            if(a[i]==a[j])
            {
                flag=flag+1;
            }

        }
        
        /* code */
    }
    printf("%d",flag);
    
    return 0;
}
