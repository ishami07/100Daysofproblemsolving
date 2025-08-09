#include<iostream>
#include<vector>
using namespace std ;

int unionArray( vector <int> arr , vector <int> brr , vector <int> crr){
    
    for(int i=0;i<arr.size() ; i++){
        crr.push_back(arr[i]);
        
       
    }
    for(int i=0;i<brr.size() ; i++){
        crr.push_back(brr[i]);
        
    }
    cout<<" Union of array : " << endl ;
    for(int i=0 ; i<crr.size() ; i++){
        cout<< crr[i] << "  " ;
    } 

    return 1;
}

int main(){
    int n;
    cout<<"Enter the size of first array : "<< endl ;
    cin>>n;
    vector<int> arr(n) ;
    for(int i=0 ; i< arr.size() ; i++ ){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter the size of second array : "<< endl ;
    cin>>m;
    vector<int> brr(m) ;
    for(int i=0 ; i< brr.size() ; i++ ){
        cin>>brr[i];
    }
    vector<int> crr ;

    unionArray( arr , brr , crr  );
       
return 0 ;
}