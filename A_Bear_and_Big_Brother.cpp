#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code her
    int a,b;
    cin>>a>>b;
    int flag=0,cnt=0;
    while(flag!=1)
    {
        if(a<=b)
        {
            a=a*3;
            b=b*2;
            cnt=cnt+1;
        }
        else if(a>b){
            flag=1;
            break;
        }
    }
    cout<<cnt;
    return 0;
}
