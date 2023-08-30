#include <iostream>
#include <unordered_map>
using namespace std;

int highestFrequency(int arr[], int n) {
    // Write your code here
     unordered_map<int, int> map; // insertion in hashmap
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    int k=0, value=0;
    for(int i=0; i<n; i++){
        if(map[arr[i]] > value)
        {
            k=arr[i];
            value = map[arr[i]];
        }
    }
    return k;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}