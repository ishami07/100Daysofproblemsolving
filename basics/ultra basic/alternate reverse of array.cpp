#include<iostream>
using namespace std;
int reverse(int arr[], int size )
{
    int start=0;
    int end=1;
    while(start<size)
    {
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;
    }
    return 0;
}
int printarray( int arr[], int size )
{
    cout <<"reversend array is : "<<endl;
    for(int a=0; a<size; a++)
    {
        cout << arr[a] << " ";
    }
    return 0;
}
int main()
{
    int size;
    cout << "enter the size of array " << endl;
    cin >>size;
    int arr[100];
    cout << "enter the elements of array " << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    reverse(arr,size);
    printarray(arr,size);

    return 0;
}


    