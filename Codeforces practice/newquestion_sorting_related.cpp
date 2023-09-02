#include<iostream>
using namespace std ;

int partition(int a[],int si,int end){
    int i =si+1,k=0,swap;
    for(;i<=end-si+1;i++){
        if(a[si]>a[i]){
            k++;
        }
    }
    
    int temp;
    temp = a[si+k];
    a[si+k] = a[si];
    a[si] = temp;
    
   while(si<si+k && si+k<end){
    if(a[si]<a[si+k]){
        si++;
    }
    else if(a[end]>a[si+k]){
        end --;
    }
    else {
        swap = a[si];
        a[si] = a[end];
        a[end]= swap; 
        end--;
        si++;
    }}
    return si+k;
}

void quicksort(int a[],int si,int end){
    if(si>=end){
        return;
    }
   int c = partition(a,si,end);
   quicksort(a,si,c-1);
   quicksort(a,c+1,end);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  quicksort(a,0,n-1);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }

}