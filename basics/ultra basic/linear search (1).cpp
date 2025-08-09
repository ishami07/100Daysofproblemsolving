#include<iostream>
using namespace std;
bool search( int arr[], int size,int key )
{
    for(int a=0; a<size; a++)
    {
        if(key==arr[a])
        {
            return 1;
        }
    }    
    return 0;
}
int main()
{
    int size,key;
    cout << "enter the size of array " << endl;
    cin >>size;
    int arr[100];
    cout << "enter the elements of array " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key to search " << endl;
    cin >> key;
    int result = search(arr,size,key);
    if(result==1)
    {
    cout << "the element is present in array" << endl;
    }
    else
    {
    cout << "the element is not present in array" << endl;
    }
    return 0;
}


    