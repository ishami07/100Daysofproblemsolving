#include<iostream>
using namespace std;
int count(int arr[], int size )
{
    int sum=0,a;

    for(  a=0 ; a<size ; a++)
    {
        int temp = arr[a];
        for( int b=0 ; b<size ; b++)
        {
            if (temp==arr[b])
            {
                sum = sum +1;
            }
        }
        if (sum==1)
        {
            return temp;
        }
    }
    return 0;
}
int main()
{
    int m;
    cout << "enter the value of m " << endl;
    cin >>m;
    int size=2*m+1;
    int arr[100];
    cout << "enter the " << size <<" elements of array " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    cout << count(arr,size)  << endl;

    return 0;
}


    