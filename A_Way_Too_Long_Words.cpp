#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count= s.length();
        if(count >10)
        {
cout<<s[0]<<count-2<<s[count-1]<<endl;
        }
        else if(count<=10)
        {
            cout<<s<<endl;
        }
        
        
    }

    return 0;
}
