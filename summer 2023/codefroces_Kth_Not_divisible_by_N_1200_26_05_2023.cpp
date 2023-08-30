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
    ll t;
    cin >> t;
    while (t--)
    {

        // faster
        ll n, k;
        cin >> n >> k;
        int need = (k - 1) / (n - 1);
        cout << k + need << endl;
        // if(k==n){
        //     cout<<k+1<<endl;
        // }
        //  else if(k<n){
        //      cout<<k<<endl;
        //  }
        // else if(k%(n-1) == 0){
        //     cout << ((k / (n - 1)) * n) - 1 << endl;
        // }else{
        //    cout << ((k / (n - 1)) * n) + 1 << endl;
        // }
    }

    return 0;
}