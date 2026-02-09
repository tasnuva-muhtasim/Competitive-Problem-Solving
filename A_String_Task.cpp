#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    string s;
    cin >>s;
int i=0;
    for(char b:s){
        
        if(b>='A'&& b<='Z')
        {
            s[i]=s[i]+32;
        }
        i++;
    }
    

    //int j=0;
    for(int j=0;j<s.length();){

        if(s[j]=='a'||s[j]=='i'||s[j]=='o'||s[j]=='e'||s[j]=='u'||s[j]=='y'){
            s.erase(j,1);
           
        }
       else{
        j++;
    }
    }
//cout<<"erased vowel: "<<s<<endl;

    int k=0;
    for(char b:s){
    s.insert(k,1,'.');
    k=k+2;
    }
    
    cout<<s;
    return 0;
}
