#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int index, vector<int> &v, int arr[], int n){
    if(index==n){
        for(auto it : v){
            cout<< it << " ";
        }
        if(v.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
 v.push_back(arr[index]);
 printSubsequences(index+1,v,arr,n);
 v.pop_back();
 printSubsequences(index+1,v,arr,n);
}

int main(){

int arr[] = { 1,2,3,4,5};
int n=5;
vector<int> v;
printSubsequences(0,v,arr,n);





    
    return 0;
}