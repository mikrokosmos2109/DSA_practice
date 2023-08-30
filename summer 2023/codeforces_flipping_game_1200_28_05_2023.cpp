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

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int count_1=0;
    int max_count_0=-1;
    int count_0=0;
    for(int i=0; i<n; i++){
        if(v[i] == 1){
            count_1++;
        
        if(count_0>0){
            count_0--;
        }
    } else{
        count_0++;
        max_count_0=max(count_0,max_count_0);
    }

    }
    cout<<count_1+max_count_0<<endl;

    return 0;
}