#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
string str;
cin>>str;
string s1 = "1111111";
string s2 = "0000000";
 if ((str.find(s1) != std::string::npos) || (str.find(s2) != std::string::npos) ) {
    cout << "YES" << '\n';
} else{
    cout<<"NO" << '\n';
}

	
    return 0;
}
