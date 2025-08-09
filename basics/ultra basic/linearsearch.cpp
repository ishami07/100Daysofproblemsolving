#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int key)
{
int i, max=arr[0];
    for( i=0; i<=size-1; i++)
    {
        if(arr[i]==key)
        {
             return i;
        }
    }
    return 0;
}
int main()
{
    int arr[10];
    int size ;
    int key,i;
    cout<< "enter the size of array:  ";
    cin >> size;
    cout<< "enter the elements of array:  ";
    for(int i=0; i<=size-1; i++)
    {
        cin>>arr[i];
    }
    cout << "enter the key to search" << endl;
    cin >> key;
    if (linearsearch(arr,size,key))
    {
    cout << "key is present at " <<linearsearch(arr,size,key)<<"th index of array"<<endl;
    }
    else
    {
    cout << "key is not present" << endl;
    }
    
}