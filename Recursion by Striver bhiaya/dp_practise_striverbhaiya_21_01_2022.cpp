#include<bits/stdc++.h>
using namespace std;


int fibothrougMemoization(int n, vector<int>& dp){
    if(n<=1) 
    return n;
    
    if(dp[n]!= -1) 
    return dp[n];

    return dp[n]= fibothrougMemoization(n-1,dp) + fibothrougMemoization(n-2,dp);
}



int main(){

  int n=5;
  vector<int> dp(n+1,-1);
  cout<<fibothrougMemoization(n,dp);


    
    return 0;
}