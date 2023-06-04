#include<bits/stdc++.h>
using namespace std;
int subsetSum(int arr[], int n, int i, int sum)
{
   int count=0;
    if (i == n)
    {
        if (sum == 0) 
        {
            count++;
        }
        return count;
    }

    count += subsetSum(arr, n, i + 1, sum - arr[i]);

    count += subsetSum(arr, n, i + 1, sum);

    return count;
}
int main(){
    
    // write your code here
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;
        int v[n];

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        
        cout << subsetSum(v, n, 0, k)<<endl;
        
    }
    return 0;
}