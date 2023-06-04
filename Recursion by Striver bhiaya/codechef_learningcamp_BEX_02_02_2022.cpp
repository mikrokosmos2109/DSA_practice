#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;
    cin>>t;
    stack<pair<int,string> > bookinfo;
    stack<int> minStack;
    
    while(t--)
    {
        int n;
        cin>>n; 
        if(n != -1)
        {
            string bookname;
            cin>>bookname;
            if(n==0)
            {
                continue;
                
            }
            
            bookinfo.push({n,bookname});
            
            if(c.empty() or n <= minStack.top())
            {
                c.push(n);
            }
        }
        else
        {
            int i=0;
            int minvalue=c.top();
       
            while(bookinfo.top().first != minvalue)
            {
                bookinfo.pop();
                i++;
            }
            
            cout<<i<<" "<<bookinfo.top().second<<endl;
            
            bookinfo.pop();
            
            minStack.pop();
        }
        
    }
    
	return 0;
}
