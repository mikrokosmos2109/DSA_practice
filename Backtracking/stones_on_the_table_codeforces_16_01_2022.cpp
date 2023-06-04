#include <bits/stdc++.h>
using namespace std;


#define ar array
#define ll long long
#define ld long double


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll count =0;
   for(ll i=0;i<n-1; i++){
    if(s[i]==s[i+1]){
        count++;
    }
    }
    //else{
      //  break;
    //}
   
   cout<<count<<"\n";
   

}