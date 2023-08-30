//jai shree ram _/\_

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1000000000 + 7;
#define mset(arr, n) memset(arr, n, sizeof arr);
#define faster ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);

int main(){
    // ll t;
    // cin>>t;
    // while(t--){
    // }
    
    ll n;
    cin>>n;
    vector<ll> boys(n);
    for(int i=0; i<n; i++){
        cin>>boys[i];
    }
    ll m;
    cin>>m;
    vector<ll> girls(m);
    for(int i=0; i<m; i++){
        cin>>girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    ll ans=0;
    int i=0,j=0;
    while(i<n and j<m){
        if(abs(boys[i]-girls[j])<=1){
            ans++;
            i++;
            j++;
        }
        else if(boys[i]<girls[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout<<ans<<endl;

    return 0;
}