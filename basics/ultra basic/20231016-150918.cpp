#include<iostream>
using namespace std;
int binarysearch (int arr[],int size,int key)
{
    int start=0,end=size-1,mid;
    mid=(start+end)/2;
    for(int  i=0; i<=size-1; i++)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid]<key vo
        {
            start = mid +1 ;
        }
        if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=(start+end)/2;
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
    if (binarysearch(arr,size,key)>=0&&binarysearch(arr,size,key)<=size-1)
    {
        cout << "key is present at " <<binarysearch(arr,size,key)<<"th index of array"<<endl;
    }
    else
    {
        cout << "key is not present" << endl;
    }

}