#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;




int main(){
     unordered_map<string, int> map;
     map[ "abc" ] = 1;
     map[ "abc1" ] = 2;
     map[ "abc2" ] = 3;
     map[ "abc3" ] = 4;
     map[ "abc4" ] = 5;
     map[ "abc5" ] = 6;

      unordered_map<string, int> ::iterator it = map.begin();
      while(it != map.end()){
      cout<<"Key : " <<it ->first <<" Value :" << it ->second <<endl;

          it++;
      }
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);

vector<int>::iterator it1 = v.begin();

while (it1 != v.end()) {

cout << *it1 << endl; 

it1++;

}

      }

