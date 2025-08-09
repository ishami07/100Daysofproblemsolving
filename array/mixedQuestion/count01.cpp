#include <iostream>
using namespace std;
int main()
{
    int size, zeronum=0 , onenum=0;
    int arr[500];
    cout << "Enter the size of array :" << endl;
    cin >> size;
    cout << "enter the elements in array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeronum++;
        }
        if (arr[i] == 0)
        {
            onenum++;
        }
    }
    cout<<"No. of zeros :"<< zeronum <<endl<<"number of Ones :"<< onenum<<endl;
    
    
    
}