#include<stdio.h>
int main(){
    int sum=0;
    char s[1000001];
    scanf("%s",&s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        /* code */
        sum=sum+s[i]-48;
    }
    printf("%d\n",sum);
    
    return 0;
}
