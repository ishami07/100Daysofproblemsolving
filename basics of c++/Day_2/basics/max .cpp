#include<iostream>
using namespace std;
int num( int arraymax[], int n )
{
    int max=INT_MIN;
    for(int a=0; a<n; a++)
    {
        if(arraymax[a]>max)
        {
            max=arraymax[a];
        }
    }
    return max;
}
int main()
{
    int size,n,arraymax ;
    cin >>size;
    int arr[100];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << num(arraymax[],n) ;
    return 0;
}