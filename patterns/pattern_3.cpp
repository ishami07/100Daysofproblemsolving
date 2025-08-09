#include <iostream>
using namespace std;

int main()
{

    // hollow rectangle  pattern

    int row, col;
    cout << " enter the value of rows : ";
    cin >> row;
    int n;
    cout << " enter the value of columns : ";
    cin >> col;

    // method 1

    // for( int i=0 ; i < row ; i++){
    //     for (int j = 0; j < col ; j++){
    //         if( i==0 || i==row-1 || j==0 || j ==col-1 ){
    //             cout<<"*";
    //         }else {
    //             cout << " ";
    //         }
    //     }
    //     cout<< endl ;
    // }

    // method 2

    for (int i = 0; i < row; i++)
    {

        if (i == 0 || i == row - 1)
        {
            for (int j = 0; j < col; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            cout << "*";
            for (int k = 0; k < col - 2; k++)
            {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
    }
    
}

