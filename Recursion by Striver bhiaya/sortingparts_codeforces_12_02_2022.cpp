#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if (!is_sorted(arr, arr +n) ){
        cout<<"YES"<<endl;
        //break;
    }

	else{
     cout<<"NO"<<endl;
	}
        
    }


	
    return 0;
}