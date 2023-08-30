#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
      ll n;
      cin>>n;
      vector<ll> v(n);
      for(int i=0; i<n; i++){
        cin>>v[i];
      }
      ll ans=v[n-1];
      ll cur;
      for(int i=n-2; i>=0; i--){
          cur= min(v[i],v[i+1]-1);
          if(cur<0){
            cur=0;
          }
          v[i]=cur;
          ans +=cur;
      }
      cout<<ans<<endl;
}


