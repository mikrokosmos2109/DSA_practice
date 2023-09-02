#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //ll t;
    //cin>>t;4
    //while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<2<<endl;
            
        }else{
            cout<<floor((n*n)/2)+2<<endl;
        }
    //}
    return 0;
}