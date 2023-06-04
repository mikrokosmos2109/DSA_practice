#include <bits/stdc++.h>
using namespace std;
#define ll long long
void reverseStr(string& str)
{
    int n = str.length();
  

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main() {
    ll t;
    cin>>t;
    while(t--){
ll n,k;
cin>>n>>k;
string str;
cin>>str;

	string s;

	s= str ;
	reverse ( str.begin () , str.end ());
	if ( str == s || k == 0 ){
	cout << "1" << endl;
    }
	else{
	cout << "2" << endl ;	
	}
    }
	
    return 0;
}