#include <iostream>
using namespace std;

int reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end )
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
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
    reverseArray(arr, size);
    cout << "Reversed array :";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
        
    }
    
}