#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row=3;
    int col=4;
// // METHOD 1
//     vector<vector<int> > arr;
//     vector<int> a{1,8,2};
//     vector<int> b{4,3,9};
//     vector<int> c{5,6,7};

//     arr.push_back(a);
//     arr.push_back(b);
//     arr.push_back(c);

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr[i].size(); j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//     cout<< endl ;    
//     }
    
// METHOD 2
    
    vector<vector<int> > arr(row,vector<int>(col ,5));    /***************  IMPORTANT **************** */

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin>>arr[i][j];
        }
    
    }
    cout<<"printing Matrix: "<< endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<< endl ;    
    }
}