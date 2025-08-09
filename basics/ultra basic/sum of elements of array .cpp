#include<iostream>
using namespace std;
int sumofarray( int arr[], int n )
{
    cout << "enter in function" << endl;
    int sum =0;
    for(int a=0; a<n; a++)
    {
        sum=arr[a]+sum;
    }
    cout <<"sum of elements of array is :"<<sum <<endl;
    cout << "left the function" << endl;
    return 0;
}
int main()
{
    int n;
    cout << "enter the size of array " << endl;
    cin >>n;
    int arr[100];
    cout << "enter the elements of array " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sumofarray(arr,n);
    return 0;
}

