#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    cout << min((n / m) * b, n * a) + min((n % m) * a, b) << endl;
}

