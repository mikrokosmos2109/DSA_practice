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
    ll len;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if (is_sorted(arr, arr +n) ){
        cout<<"NO"<<endl;
        break;
    }
    else{
        if(n%2 == 0)
        {
        len = n-1;
        sort(arr,arr+len);
        sort(arr+len,arr+n);
        } 
        else
        {
            len = 1;
        sort(arr,arr+len);
        sort(arr+len,arr+n);
        }
        if (is_sorted(arr, arr +n) ){
        cout<<"NO"<<endl;
        // continue;
    }
	else{
     cout<<"YES"<<endl;
	}
        
    }

}

	
    return 0;
}