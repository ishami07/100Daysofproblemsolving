#include<iostream>
using namespace std ;

int main(){

    int n ;
    cout<<"enter the value of n: " ;
    cin >> n ;

    for (int row = 1; row <= n; row++)
    {
        // print normal order of alphabets 
        for (int col = 1; col <= row; col++)
        {
            cout<<(char)(65+col-1);
            
        }
        //print reverse order of alphabets
        for (int col = 1; col < row; col++)
        {
            cout<<(char)(65+row-col-1);
            
        }
        cout<<endl;
    }
}