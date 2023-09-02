#include <iostream>
#include <unordered_map>

#include <vector>
using namespace std;

vector<int> removeDuplicates(int *a, int size){
    vector<int> output;
    unordered_map<int, bool> seen;
    for(int i=0; i<size; i++){
        if(seen.count(a[i])>0){
            continue;
        }
    seen[a[i]] = true;
    output.push_back(a[i]);
    }
    return output;
}


int main(){
     int arr[] = { 12, 13, 12, 5, 11, 13, 5, 6, 7 };
     vector<int> ans = removeDuplicates(arr, 9);
      for(int i=0; i<ans.size(); i++){
          cout<<ans[i]<<endl;

      }

return 0;
}