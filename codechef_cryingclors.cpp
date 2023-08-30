#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll first_box[3];
	    ll second_box[3];
	    ll third_box[3];
	    for(int i=0; i<3; i++){
	        cin>>first_box[i];
	    }
	    for(int i=0; i<3; i++){
	        cin>>second_box[i];
	    }
	    	    for(int i=0; i<3; i++){
	        cin>>third_box[i];
	    }
	    
	    ll count1= first_box[1]+first_box[2]+second_box[2];
        ll count2 = second_box[0] + third_box[0] +third_box[1];

        ll res = max(count1, count2);
  	    cout<< res<<"\n";      
	    
	    
	}
	return 0;
}
