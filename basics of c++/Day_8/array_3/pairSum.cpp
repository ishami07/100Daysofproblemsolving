#include <iostream>
#include <vector>
using namespace std;

int pairSum(vector<int> arr, int sum)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    return 1;
}

int main()
{
    int n;
    cout << "Enter the size of first array : " << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    
    int sum;
    cout << "Enter the sum :" << endl;
    cin >> sum;
    cout << "the pairs are : " << endl;
    pairSum(arr, sum);

    return 0;
}