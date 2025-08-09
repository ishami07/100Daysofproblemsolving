#include<iostream>
using namespace std;
int largest( int arr[], int n )
{
    int max=INT_MIN;
    for(int a=0; a<n; a++)
    {
        if(arr[a]>max)
        {
            max=arr[a];
        }
    }
    return max;
}
int main()
{
    int n;
    cin >>n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "the biggest element is " << largest(arr,n) << endl;
    return 0;
}

