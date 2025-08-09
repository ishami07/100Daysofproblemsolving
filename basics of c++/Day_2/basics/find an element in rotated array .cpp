#include<iostream>
using namespace std;
int searchfirst(int arr[], int size, int key, int ans )
{
    int start = 0 ;
    int end = ans - 1 ;
    int mid = ( start + end ) / 2 ;
    while (start<=end)
    {
        if ( arr[mid] = key)
        {
            return mid ;
        }
        if (key < arr[mid] )
        {
            end = mid - 1 ;
        }
        if (key > arr[mid])
        {
            start = start + 1 ;
        }
        mid = ( start + end ) / 2 ;
    }
    return -1 ;
}
int searchsecond (int arr[], int size, int key, int ans )
{
    int start = ans ;
    int end = size -1 ;
    int mid = ( start + end ) / 2 ;
    while (start<=end)
    {
        if ( arr[mid] = key)
        {
            return mid ;
        }
        if (key < arr[mid] )
        {
            end = mid - 1 ;
        }
        if (key > arr[mid])
        {
            start = start + 1 ;
        }
        mid = ( start + end ) / 2 ;
    }
    return -1 ;
}
int pivot(int arr[], int size )
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans ;
    while(start<end)
    {
        if(arr[mid]>arr[0])
        {
            start = mid + 1 ;
        }
        else
        {
            end = mid ;
        }
        mid=(start+end)/2;
    }
    return start ;
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
    int ans = pivot(arr,size);
    cout <<"the pivot  is  " << arr[ans] << endl;
    if (key > arr[0])
    {
        cout << "the key " << arr[searchfirst(arr,size,key,ans) ]<<" is present at " << searchfirst(arr,size,key,ans)  <<"th index no. " <<endl;
    }
    else
    {
        cout << "the key " << arr[searchsecond(arr,size,key,ans) ]<<" is present at " << searchsecond(arr,size,key,ans) <<"th index no. " <<endl;
    }
}


