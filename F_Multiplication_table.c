#include<stdio.h>
int main(){
    int count;
    scanf("%d",&count);
    for ( int i = 1; i <= 12; i++)
    {
        /* code */
        printf("%d * %d = %d\n",count,i,(i*count));
    }
    
    return 0;
}
