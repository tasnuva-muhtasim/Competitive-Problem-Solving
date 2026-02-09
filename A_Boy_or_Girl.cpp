#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int freq[26]={0};
    string s;
    cin>>s;
    
    for(char c : s)
    {
        int i= c;
        freq[i-'a']++;
    }
    int count=0;
    for( int j=0;j<26;j++){
       
        if(freq[j]>0)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
cout<<"IGNORE HIM!";

    }

    return 0;
}
