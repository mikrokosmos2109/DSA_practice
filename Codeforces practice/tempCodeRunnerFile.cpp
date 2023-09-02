#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double

// const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
// const ll INF = 1e9;
// const ld EPS = 1e-9;

// void solveKeerti()
// {
// }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll k,money,n;
    cin>>k>>money>>n;

    int moneyRequired = 0;
    for(int i=1; i<=n; i++){
        moneyRequired += i*k;
    }
    int ans = moneyRequired-money;
    if(ans>0){
        cout<<ans<<endl;
    }else{
        cout<<0<<endl;
    }
}