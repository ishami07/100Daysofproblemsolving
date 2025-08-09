#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout<<"enter the value of n: " ;
    cin >> n ;

    //upper half 
    for (int row = 0; row < n; row++)
    {
        // right inverted half pyramid 
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }

        // spaces 
        for (int col = 0; col < 2*row; col++)
        {
            cout<<" ";
        }

        // left inverted half pyramid 
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        cout<< endl ;
         
    }

    //lower half 
    for (int row = 0; row < n; row++)
    {
        // right  half pyramid 
        for (int col = 0; col < row+1 ; col++)
        {
            cout<<"*";
        }

        // spaces 
        for (int col = 0; col < 2*n-2*row-2 ; col++)
        {
            cout<<" ";
        }

        // left  half pyramid 
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        cout<< endl ;
         
    }
    
}