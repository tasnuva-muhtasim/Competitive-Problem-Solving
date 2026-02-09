#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;
    cin>>n;
    int a[n][n];
    int x=0,y=0,z=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            if(j==0){
                x=x+a[i][j];

            }
            else if(j==1)
            {
                y=y+a[i][j];
            }
            else if(j==2)
            {
                z=z+a[i][j];
            }
        }
    }
//cout<<x<<" "<<y<<" "<<z<<endl;
    if(x==0 && y==0 && z==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}
