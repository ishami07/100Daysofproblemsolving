#include <iostream>
#include <vector>
using namespace std;

int sort(vector<int>& arr)
{
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        if (arr[start]==0 && arr[end]==0)
        {
            start++;
        }
        else if (arr[start]==0 && arr[end]==1)
        {
            start++;
            end--;
        }
        else if (arr[start]==1 && arr[end]==0)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if (arr[start]==1 && arr[end]==1)
        {
            end--;
        }  
    }

    cout << "the sorted 0's and 1's array  : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i]<<"  ";
    }
    
    return 1;
}

int main()
{
    int n;
    cout << "Enter the size of  array : " << endl;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    sort(arr);

    return 0;
}