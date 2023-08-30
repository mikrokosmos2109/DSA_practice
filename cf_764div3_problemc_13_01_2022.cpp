#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,a,b) for(i=a;i<=b;i++)


vector<ll> cnt;
ll n;
void pushdown(ll curr)
{
	if (curr == 0)return;
	cnt[curr]--;
	pushdown(curr / 2);
}
 
int main() {


	ll t, i, j, ans, temp, sum, x;
	string sans;
	//t = 1;
	cin >> t;
	while (t--)
	{
		sans = "NO";
		ans = temp = sum = 0;
		cin >> n;
		cnt.assign(n + 1, 0);
		fo(i, 1, n)
		{
			cin >> x;
			while (x > 0)
			{
				if (x <= n)cnt[x]++;
				x /= 2;
			}
		}
		bool ok = true;
		for (i = n; i > 0; i--)
		{
			if (cnt[i] <= 0)
			{
				ok = false;
				break;
			}
			pushdown(i);
		}
		if (ok)sans = "YES";
		cout << sans << "\n";
	}
	return 0;
}