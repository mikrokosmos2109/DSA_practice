#include <bits/stdc++.h>

using namespace std;


#define ar array
#define ll long long
#define ld long double

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string word;
    cin>>word;
    for (int i = 0; i < word.length(); i++)
	{
		if (i == 0)
		{
			word[i] = toupper(word[i]);
		}

	}
    cout<<word<<"\n";
   

}