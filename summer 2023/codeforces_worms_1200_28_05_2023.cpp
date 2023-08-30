// jai shree ram _/\_
// jai bajrang bali _/\_
// HARE KRISHNA HARI BOL
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
    // cin >> t;
    // while (t--)
    // {

    // }
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll m;
    cin>>m;
    // vector<ll> b(m);
    // for(int i=0; i<m; i++){
        // cin>>b[i];
    // }
    vector<int> pre(n);
    pre[0] = v[0];
   
    for (int i = 1; i < n; i++){
        pre[i] = pre[i - 1] + v[i];
    }
    for(int i=0; i<m; i++){
       int worms;
       cin>>worms;
    //    cout<<__lower_bound(prefixSum,prefixSum+n,worms)-prefixSum + 1<<endl;
       ll ans = *(lower_bound(pre.begin(), pre.end(), worms) + 1);
       cout<<ans<<endl;
    }

    return 0;
}