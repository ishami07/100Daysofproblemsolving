#include<iostream>
using namespace std ;

int main() {
    // squre pattern 
    int row , col; 
    cout << " enter the value of rows : ";
    cin>> row;
    int n; 
    cout << " enter the value of columns : ";
    cin>> col ;
    for( int i=0 ; i< row ; i++){
        for (int j = 0; j < col ; j++)
        {
            cout<<"*";
        }
        cout<< endl ;
    }
} 