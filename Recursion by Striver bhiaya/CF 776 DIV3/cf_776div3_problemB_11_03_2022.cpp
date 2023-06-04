#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solveKeerti(){
         ll l,r,a;
         cin>>l>>r>>a;
         if(l/a == r/a){
             cout<< r/a + r%a<<endl;
         }
         else{
             cout<< max (r/a + r%a , r/a -1 + a-1)<<endl;
         }
}

int main() {
cout<<"hELLO";
}