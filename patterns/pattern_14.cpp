#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout<<"enter the value of n: " ;
    cin >> n ;

    //upper half 
    for (int row = 1; row <= n; row++)
    {
        
        for (int col = 1; col <= row; col++)
        {
            if(col != row){
                cout<<row<<"*";
            }
            else{
                cout<<row;
            }
            
        }
        cout<<endl;

    }

    //lower half 
    for (int row = 1; row <= n; row++)
    {
        
        for (int col = 1; col <= n-row+1; col++)
        {
            if(row != n-col+1 ){
                cout<<n-row+1<<"*";
            }
            else{
                cout<<n-row+1;
            }
            
        }
        cout<<endl;

    }
    
}