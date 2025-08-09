#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key )
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid ;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        if(key<arr[mid])
        {
            end=mid - 1 ;
        }
        mid=(start+end)/2;
    }
    return -1 ;
}

int main()
{
    int size,key;
    cout << "enter the size of array " << endl;
    cin >> size ;
    int arr[100] ;
    cout << "enter the elements of array" << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << "enter the key to search " << endl;
    cin >> key;
    int result =binarysearch(arr,size,key);
    cout <<"the key is present at index no. " << result<< endl;
}


