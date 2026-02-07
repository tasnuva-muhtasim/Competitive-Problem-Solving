#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
string s,t;
cin>>s>>t;
transform(s.begin(),s.end(),s.begin(), ::tolower);
transform(t.begin(),t.end(),t.begin(), ::tolower);
int i=-1;
if(s>t)
{
    cout<<1;
}
else if (t>s)
{
    cout<<-1;
}
else if (s==t)
{
    cout<<0;
}
    return 0;
}
