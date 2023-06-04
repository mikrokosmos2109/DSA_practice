#include <bits/stdc++.h>
using namespace std;
/* //BRUTE FORCE O(n*n) time complexity
 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
            if((nums[i] + nums[j])==target){ 
                ans.push_back(i);
                ans.push_back(j);
            }
        }
        }
        return ans;
        
    }
*/

    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }


int main()
{
    vector <int> a = {1 , 4 , 5 , 11 , 12};
    int target = 9;
    for(int &x : twoSum(a , target))
        cout << x << " ";
    cout << '\n';
}
