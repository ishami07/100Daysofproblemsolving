#include<iostream>
using namespace std;
int peek(int arr[], int size )
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int ans ;
    while(start<end)
    {
        if(arr[mid]<arr[mid+1])
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
    int size;
    cout << "enter the size of array " << endl;
    cin >> size ;
    int arr[100] ;
    cout << "enter the elements of array" << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout <<"the peek element of mounted array is present at index no. " << peek(arr,size)<< endl;
}


    