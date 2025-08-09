#include<iostream>
using namespace std;
int leftoccurance(int arr[], int size, int key )
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans ;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid ;
            end = end - 1 ;
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
    return ans ;
}
int rightoccurance(int arr[], int size, int key )
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans ;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans = mid ;
            start = start + 1 ;
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
    return ans ;
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
    cout <<"the leftoccurance of key is present at index no. " << leftoccurance(arr,size,key)<< endl;
    cout <<"the rightoccurance of key is present at index no. " << rightoccurance(arr,size,key)<< endl;
}


