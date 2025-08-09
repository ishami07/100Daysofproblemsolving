#include<bits/stdc++.h>
using namespace std;

int main(){
    //pair 
    pair<int ,int> p = {1,2};
    cout<<p.first << " "<< p.second<<endl ;

    pair<int , pair< int , int >>s = {4,{5,6}};
    cout<<s.first<<" "<< s.second.first << " "<< s.second.second << endl;
    
    pair<int,int> arr[] = { {1,2}, {2,3} , {3,4}};
    cout<<arr[1].second;
}