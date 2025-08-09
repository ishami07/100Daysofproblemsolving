#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec ;

    vec.push_back({3,4});
    vec.emplace_back(5,6);  // it will automatically assume it as an pair. no need to place {} to make a pair ;


    vector<int>v(5,100);  // { 100,100,100,100,100 }
    
    vector<int>v(5);  // define the size of vector 5 and place all the entry as 0 ;
    
    // copy vector 
    vector<int> v1(5,20);
    vector<int> v2(v1);
     
    vector<int>::iterator it = v.begin();
    it++;
    cout<< *(it) << " " ; // print 2nd element in the vector

    vector<int> :: iterator it1 = v.end();
    vector<int> :: reverse_iterator it2 = v.rend();
    vector<int> :: reverse_iterator it3= v.rbegin();
    




     
}