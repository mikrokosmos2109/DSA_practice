#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
    unordered_map<string , int> ourmap;
    pair<string, int> p("abc",1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    //find or access
    cout << ourmap["abc"]<< endl;
    cout<< ourmap.at("abc")<< endl;
     cout << ourmap["ghi"]<< endl;
     cout<<"size : " <<ourmap.size() <<endl;
    //checking presencece
    if(ourmap.count("ghi")>0){
     cout<<"YES"<<endl;
    }
     //erase
     ourmap.erase("ghi");
     if(ourmap.count("ghi")>0){
     cout<<"YES"<<endl;
    } 
     cout<<"size : " <<ourmap.size() <<endl;



}