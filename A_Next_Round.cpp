#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n,k,t;
    cin>>n>>k;
    int a[n];
    int cnt =0;
    int i=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   for (int i = 0; i < n; i++)
   {
    /* code */
    if(a[i]>=a[k-1] && a[i]>0)
    {
        cnt=cnt+1;
        //cout << a[i]<<a[k-1]<<cnt<<endl;
    }
   }
   
    cout<<cnt;
    return 0;
}
