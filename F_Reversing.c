#include<stdio.h>
int main(){
    int d;
    scanf("%d",&d);
    int a[d];
    int b[d];
    for (int i = 0; i < d; i++)
    {
        /* code */
        scanf("%d ",&a[i]);
    }
    for (int i = 0; i < d; i++)
    {
        /* code */
        b[d-1-i]=a[i];
    }
    
    for (int i = 0; i < d; i++)
    {
        /* code */
        printf("%d ",b[i]);
    }
    
    return 0;
}
