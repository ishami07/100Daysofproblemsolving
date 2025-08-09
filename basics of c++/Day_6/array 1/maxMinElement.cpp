#include <iostream>
#include <limits.h>
using namespace std;
int maxElement(int arr[], int size)
{
    int max = INT_MIN ;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int minElement(int arr[], int size)
{
    int min = INT_MAX ;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    int arr[500];
    cout << "Enter the size of array :" << endl;
    cin >> size;
    cout << "enter the elements in array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum element in array is : " << maxElement(arr, size) << endl;
    cout << "Minimum element in array is : " << minElement(arr, size) << endl;
}