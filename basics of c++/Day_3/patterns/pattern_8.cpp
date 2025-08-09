#include<iostream>
using namespace std ;

int main() {
    
    // HOLLOW INVERTED  HALF PYRAMID 
    

    int n ;
    cout<<"enter the value of n : ";
    cin >> n ;

    for (int row = 0; row < n ; row++){
        if(row == 0  ) {
            for (int i = 0; i < n ; i++){
                cout<<"*";
            }
            
        }
        else if ( row != 0  && row != n-1 ){
            cout <<"*";
            for(int j = 0 ; j < (n-2-row) ; j++ ){
                cout<<" ";
            }
            cout <<"*";
        }
        else {
            cout<<"*";
        }
        
        cout<< endl ;
    }
    

} 