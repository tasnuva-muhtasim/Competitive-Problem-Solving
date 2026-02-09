#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    string c;
    cin>>c;
    int a[256]={0};
string target="hello";
int j=0;
for(int i=0;i<c.length();i++){
    if(c[i]==target[j]){
        j++;
        

    }
    if(j>=5)
        {
            break;
        }
}

if(j>=5)
{
    cout<<"YES";

}
else{
    cout<<"NO";
}
    return 0;
}
