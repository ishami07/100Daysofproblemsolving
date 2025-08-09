#include<iostream>
using namespace std ;

int main() {
    // squre pattern 
    int n; 
    cout << " enter the value of n : ";
    cin>>n;
    for(int row=0 ; row<n ; row++){
        for (int col = 0; col < n; col++)
        {
            cout<<"*";
        }
        cout<< endl ;
    }
} 