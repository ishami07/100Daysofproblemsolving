#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1 ;
}
int main()
{
    int size, key;
    int arr[500];
    cout << "Enter the size of array :" << endl;
    cin >> size;
    cout << "enter the elements in array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key to search : " << endl;
    cin >> key;

    int result = linearSearch(arr, size, key);
    if (result==-1)
    { 
        cout<<"Key not found " << endl ;
    }
    else {
        cout<< "key is present at index : " << result << endl ;
    }
    
}