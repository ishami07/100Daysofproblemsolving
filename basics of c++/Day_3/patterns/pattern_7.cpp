#include<iostream>
using namespace std ;

int main() {
    
    // INVERTED NUMERIC HALF PYRAMID 
    

    int n ;
    cout<<"enter the value of n : ";
    cin >> n ;
    for (int row = 0; row < n ; row++){
        for(int col = 0 ; col < n-row ; col++){
            cout<< col+1 ;
        }
        cout<< endl ;
    }
    

} 