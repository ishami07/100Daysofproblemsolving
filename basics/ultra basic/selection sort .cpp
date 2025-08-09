#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++) 
    {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}
int main()
{  
    int arr[100],size;
    cout << "enter the size of array" << endl;
    cin >> size;
    cout << "enter the elements of array" << endl; 
    for(int i=0;i<size;i++)
    {
    cin >> arr[i];
    }
    selectionSort(arr, size);
    cout << "Sorted array: \n";
    printArray(arr, size);
    return 0;
}