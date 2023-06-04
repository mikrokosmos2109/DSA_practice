#include <bits/stdc++.h>
using namespace std;

struct Pair 
{
    int min;
    int max;
}; 

Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;     
    //int i;
    sort(arr,arr+n);
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];     
        return minmax;
    } 
    
   else{
	   minmax.min=arr[0];
	   minmax.max=arr[n-1];

   }
   return minmax;
}

int main()
{

   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
	  cin>>arr[i];
   }
    struct Pair minmax = getMinMax(arr,n);
    
    cout << "Minimum element : " 
         << minmax.min << endl;
    cout << "Maximum element : " 
         << minmax.max;
         
    return 0;
} 
