#include<iostream>
using namespace std ;

int main() {
    
    // FULL PYRAMID 
    

    int n ;
    cout<<"enter the value of n : ";
    cin >> n ;

    for (int row = 0; row < n ; row++){
        for (int i = 0; i < n-row-1; i++)
        {
            cout<<" ";
        }
        for (int j = 0; j < row+1; j++)
        {
            cout<<"* ";
        }
        cout<< endl ;
    }
    

} 