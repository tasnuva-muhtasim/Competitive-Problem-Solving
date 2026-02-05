#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int t;
    cin>>t;
    int cntfinal=0;
    while(t--)
    {
        int a[3],cnt=0;
        for (int i = 0; i < 3; i++)
        {
            /* code */
            cin>>a[i];
            if(a[i]==1)
            {
                cnt=cnt+1;
            }
        }
        if(cnt>=2){
            cntfinal=cntfinal+1;
        }
        
        
    }
cout<<cntfinal<< endl;
    return 0;
}
