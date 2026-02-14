#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int a,b,c;
    cin>>a>>b>>c;
int ans=a+b+c;
ans=max(ans,(a+b)*c);
ans=max(ans,a*(c+b));
ans=max(ans,(a*b*c));


cout<<ans;

    return 0;
}
