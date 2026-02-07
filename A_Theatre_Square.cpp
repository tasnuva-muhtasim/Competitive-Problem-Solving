#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a;
    cin>> n >> m >>a;
    long long int x= ((n+a-1)/a)  * ((m+a-1)/a );
    cout<< x;
    return 0;

}