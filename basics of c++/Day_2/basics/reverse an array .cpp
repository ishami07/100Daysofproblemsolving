#include <iostream>
using namespace std;
int reversearray(int arr[], int size)
{
    int i, j,start=0,end=size-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start=start+1;
        end=end-1;
    }
    return 0;
}
int printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
    return 0 ;
}
int main()
{
    int arr[100],size;
    cout << "enter the size of array" << endl;
    cin >> size;
    cout << "enter the elements of array" << endl;
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    reversearray(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);

    return 0;
}