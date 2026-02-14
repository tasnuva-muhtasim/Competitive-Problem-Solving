#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
int n,flag=0;
cin>>n;
int a[12]={4,7,44,47,74,77,444,447,477,744,747,777};
for (int i = 0; i < 12; i++)
{
    /* code */


if(n%a[i]==0)

{
    cout<<"YES";
    flag=1;
    break;

}

}

if(flag==0){
    cout<<"NO";
}
    return 0;
}
