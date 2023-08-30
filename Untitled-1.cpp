#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   
   ll t;
   cin>>t;
   while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans1, ans2;
    ans1= abs(a-1);
    ans2= abs(b-c) + abs(c-1);
    if(ans1<ans2){
        cout<<"1"<<endl;
    }else if(ans2>ans1){
        cout<<"2"<<endl;
    } else{
        cout<<"3"<<endl;
    }
   }


    return 0;
}