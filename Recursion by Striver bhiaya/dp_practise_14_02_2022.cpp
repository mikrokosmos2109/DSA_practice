#include <bits/stdc++.h>

using namespace std;
int help(int i, int j, vector< vector< int> > &a,vector< vector< int> > &dp){
     if( i>0 && j>0 && (a[i][j] ==-1)) return 0;
    if(i==0 && j==0) 
        return 1;
    if(i<0 ||  j<0) 
        return 0;
   
     if(dp[i][j]!=-1) return dp[i][j];
    
    int up = help(i-1,j,a,dp);
    int left = help(i,j-1,a,dp);
    
    return dp[i][j] = up+left;
}
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here
    vector<vector<int> > dp(n,vector<int>(m,-1));
   return help(n-1,m-1,mat,dp);
}
int main() {

  vector<vector<int> > maze{{0,0,0},
                            {0,-1,0},
                            {0,0,0}};
                            
  int n = maze.size();
  int m = maze[0].size();
  
  cout<<mazeObstacles(n,m,maze);
}