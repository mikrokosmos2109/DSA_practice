#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ll t;
	cin>>t;
	while(t--){

	 ll a,b,c;

	 cin>>a>>b>>c;

    // ll x = 2*b-c;
	     ll  updated_a = b - (c - b);
    if(updated_a >= a && updated_a % a == 0 && updated_a != 0)
	{
        cout << "YES\n";
		continue;
        
    }

    ll updated_b = a + (c - a)/2;
    if(updated_b >= b && (c-a)%2 == 0 && updated_b % b == 0 && updated_b != 0) 
	{
        cout << "YES\n";
      continue;
    }

    ll updated_c = a + 2*(b - a);
    if(updated_c >= c && updated_c % c == 0 && updated_c != 0) 
	{
        cout << "YES\n";
       continue;
    }

    cout << "NO\n";
	}

}
