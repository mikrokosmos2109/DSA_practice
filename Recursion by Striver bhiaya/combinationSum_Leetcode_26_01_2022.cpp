#include <bits/stdc++.h>
using namespace std;

 void helperFunction(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds) {
        if(ind == arr.size()) 
        {
            if(target == 0) {
                ans.push_back(ds); 
            }
            return; 
        }

        if(arr[ind] <= target) {
            ds.push_back(arr[ind]); 
            helperFunction(ind, target - arr[ind], arr, ans, ds); 
            ds.pop_back(); 
        }
        
        helperFunction(ind+1, target, arr, ans, ds); 
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        helperFunction(0,target,candidates,ans,ds);
        return ans;
    }

int main(){

  vector<int> candidates = {2, 3, 6, 7};
  vector<vector<int>> output = combinationSum(candidates, 7)  ;
  for(auto x: output){

    for(auto y: x)

      cout<<y<<" ";

    cout<<endl;
    
  }
}
