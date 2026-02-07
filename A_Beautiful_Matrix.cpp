#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int a[6][6],x,i,j;
    for ( i = 1; i <= 5; i++)
    {
        
        for ( j = 1; j <= 5; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x= abs(i-3)+abs(j-3);
               
                cout<<x;
                return 0;
            }
        
        }
        if(a[i][j]==1)
            {
              
                 break;
            }
        
    }
   

    return 0;
}
