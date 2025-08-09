#include<iostream>
#include<vector>
#include<limits.h>
using namespace std ;

int intersectionArray( vector <int> arr , vector <int> brr , vector <int>& crr){
    for(int i=0;i<arr.size() ; i++){
        int key = arr[i];
        for (int j = 0; j < brr.size() ; j++)
        {
            if (brr[j]==key)
            {
                crr.push_back(key);
                brr[j]= INT_MIN ;
                
            }
            
        }
        
    }
    cout<<"intersection is :"<<endl ;
    for(int i=0 ; i< crr.size() ; i++ ){
        cout<<crr[i]<<" ";
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

    intersectionArray( arr , brr , crr  );
       
return 0 ;
}