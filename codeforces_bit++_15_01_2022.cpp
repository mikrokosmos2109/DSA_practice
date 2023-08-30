#include <bits/stdc++.h>
using namespace std;
#define ar say
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   ll n;
   cin>>n;
 int ans =0;
 string s1;

 string s2="++X";

 string s3="X++";

 string s4="--X";

 string s5="X--";

 for(int i=0;i<n;i++)

 {

  cin>>s1;

  if(s1==s2||s1==s3)

  ans=ans+1;

  else

  ans=ans-1;

 }

cout<<ans<<endl;
   

}