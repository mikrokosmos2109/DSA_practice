#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool solve(string s, char c){
    for(int i=0; i<s.size(); i++){
        if(s[i] == c){
            int leftCount = i;
            int rightCount = s.size() - i-1;
            if(leftCount % 2 == 0  && rightCount % 2 ==0){
                return true;
                break;
            }
        }
    }
    return false;
}
int main() {
	ll t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    char c;
    cin>>c;
    if(solve(s,c))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
}