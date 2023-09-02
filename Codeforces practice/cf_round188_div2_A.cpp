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
    
    ll n,k;
    cin>>n>>k;
    ll countOdd =0;
    if(n%2 == 0){
        countOdd = n/2;
    }else{
        countOdd = (n+1)/2;
    }

    if(k<=countOdd){
        cout<<2*k - 1<<endl;
    }else if(k >countOdd){
        cout<<2*(k-countOdd)<<endl;

    }
}