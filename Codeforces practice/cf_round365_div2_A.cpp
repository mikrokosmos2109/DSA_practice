#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long
#define ld long double

// const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
// const ll INF = 1e9;
// const ld EPS = 1e-9;

void solveKeerti()
{
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    ll countA = 0;
    ll countB = 0;
    while (t--)
    {

        ll x, y;
        cin >> x >> y;
        if (x > y)
        {
            countA++; // mishka won
        }
        else if (x < y)
        {
            countB++; // chris won
        }
    }
    if (countA > countB)
    {
        cout << "Mishka" << endl;
    }
    else if (countA < countB)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
    }
}