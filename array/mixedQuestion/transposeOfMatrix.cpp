#include <iostream>
#include <vector>
using namespace std;

int transpose(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < col; j++)
        {
            if (i<j)
            {
                swap(arr[i][j],arr[j][i]);
            }
            
        }
        
    }
    return 1;
}

int main()
{
    int row = 3; 
    int col = 3;
    int arr[3][3];
    cout<<"enter the elements of matrix: "<<endl; 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }

    
    transpose(arr, row , col);
    cout << "printing matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}