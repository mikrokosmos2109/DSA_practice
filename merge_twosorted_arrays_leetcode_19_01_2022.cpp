#include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &nums1 , int m , vector <int> &nums2 , int n)
{
  vector<int>res(m+n);
    
    int i=0,j=0, f=0;
    
    while(i<m && j<n)
    {
        if(nums1[i]<nums2[j])
        {
          res[f]=nums1[i];
          i++;
          f++;
               
        }
        
        else if(nums1[i]>nums2[j])
        {
              res[j]=nums2[f];
              j++;
              f++;
        }
        
        else
        {
              res[f++]=nums1[i++];
           res[f++]=nums2[j++];
            
        }
       
    }
    
   while(i<m)
   {
      res[f++] = nums1[i++];
   }
    
    while(j<n)
    {
       res[f++] = nums2[j++];
    }
    
    
    for(int k=0;k<m+n;k++)
    {
        nums1[k] = res[k];
    }

    
}
int mnums1in()
{
    vector <int> nums1 = {1 , 2 , 3};
    vector <int> nums2 = {2 , 6 , 7};
    int m = 3 , n = 3;
    nums1.resize(m + n);
    merge(nums1 , m , nums2 , n);
    for(int &x : nums1)
        cout << x << " ";
    return 0;
}