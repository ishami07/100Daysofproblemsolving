#include<iostream>
using namespace std ;

int main() {
    
    // HOLLOW DIAMOND 
    

    int n ;
    cout<<"enter the value of n : ";
    cin >> n ;
    // upper half 
    for (int row = 0; row < n ; row++){
        for (int i = 0; i < n-row-1; i++)
        {
            cout<<" ";
        }
        if(row==0){
            cout<<"*";
        }
        else{
            cout<<"*";
            for (int j = 0; j < 2*row-1; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<< endl ;
    }

    // lower half 
    for (int row = 0; row < n; row++)
    {
        for (int i = 0; i < row ; i++)
        {
            cout<<" ";
        }
        
        if(row != n-1 ){
            cout<<"*";
            for (int j = 0; j < 2*n-2*row-3; j++)
            {
                cout<<" ";
            }
            cout<<"*";

        }
        else{
            cout<<"*";
        }
        cout<<endl;    
    }
    

    
    

} 