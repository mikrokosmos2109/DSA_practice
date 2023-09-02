#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
	cin>>n;
    int one=n/3;
    int two=n%3;
    if(two==0)
    {
        for(int i=0;i<one;i++)
        {
            cout<<2<<1;
        }
        cout<<endl;
    }
    if(two==1)
    {
        cout<<1;
        for(int i=0;i<one;i++)
        {
            cout<<2<<1;
        }
        cout<<endl;
    }

    if(two==2)
    {
        for(int i=0;i<one;i++)
        {
            cout<<2<<1;
        }
        cout<<2<<endl;
    }
    }

    return 0;
}