#include <iostream>
using namespace std;
int mergearray(int arr1[], int n, int m,int arr2[], int arr3[], int size )
{
    int i=0, j=0,k=0;
    while (i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    return 0;
}
int printArray(int arr3[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr3[i] << " "<< endl;
    }
    return 0 ;
}
int main()
{
    int arr1[100], arr2[100],arr3[100]= {0},size,m,n;
    cout << "enter the size of 1st array" << endl;
    cin >> m;
    cout << "enter the elements of 1st array" << endl;
    for(int i=0; i<m; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter the size of 2nd array" << endl;
    cin >> n;
    cout << "enter the elements of 2nd array" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr2[i];
    }
    size =m+n;
    mergearray(arr1, n, m, arr2, arr3,size);
    cout << "merged array: \n ";
    printArray(arr3, size);

    return 0;
}