// jai shree ram _/\_

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1000000000 + 7;
#define mset(arr, n) memset(arr, n, sizeof arr);
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);

int main()
{
    // ll t;
    // cin>>t;
    // while(t--){
    // }
    ll n,l;
    cin >> n>>l;
    vector<ll> lanterns(n);
    for(int i=0; i<n; i++){
        cin>>lanterns[i];
    }
    sort(lanterns.begin(),lanterns.end());
    double diff=0.0, maxi=0.0;
    for(int i=1; i<n; i++){
       diff= lanterns[i]-lanterns[i-1];
       maxi = max(diff,maxi);
    }
    double diff2 = max(lanterns[0],l-lanterns[n-1]);

    cout << setprecision(10) <<fixed<<max(maxi / 2,diff2);

    return 0;
}