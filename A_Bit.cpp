#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int x=0,t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for (int i = 0; i < 3; i++)
        {
            /* code */
            if(s[i]=='+'|| s[i]=='-')
            {
                if(s[i]=='+')
                {
                    x=x+1;
                    break;
                }
                else if(s[i]=='-')
                {
                    x=x-1;
                    break;
                }
            }
        }
    }
cout<<x<<endl;
    return 0;
}