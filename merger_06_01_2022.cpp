#include<iostream>
using namespace std ;

void merger(int a[],int si,int end){
    int mid = (si +end)/2;
    int j= mid+1;
    int i = si;
    int k =0;
    int b[end -si +1];
    for(int i=si;i<end -si +1;i++){
        b[i] = a[i];
        cout<<b[i]<<" ";
    }
    cout<<endl;
    while(i<=mid && j<=end ){
        if(b[i]<b[j]){
            a[k] = b[i];
            k++;i++;
        }
        else{
            a[k]= b[j];
            k++;j++;
        }
        }
    while(i<mid+1){
            a[k] = b[i];
            k++;i++;
        }
    while(j<end+1){
            a[k] = b[j];
            j++;i++;
        }

    }



// void mergesort(int a[],int si,int end){
// int mid = (si + end)/2;
//     if(si>=end){
//         return;
//     }
// mergesort(a,si,mid);
// mergesort(a,mid+1,end);
// }

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    merger(a,0,n-1);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}