#include <bits/stdc++.h>
using namespace std;

int getMissingNo(int a[], int n) 
{ 
    /*int i, total=1; 
    
    for ( i = 2; i<= (n+1); i++)
    {
        total+=i;
        total -= a[i-2];
    }
    return total; */

    int m = n + 1;

    int total = m*(m + 1)/2;
 
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
 

    return total - sum;
} 

//Driver Program
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n-1; ++i){
        cin>>a[i];
    }

    cout<<getMissingNo(a,n);
    return 0;
}
