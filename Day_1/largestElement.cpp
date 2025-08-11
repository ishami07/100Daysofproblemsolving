#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

int largestElement(const vector<int>& nums)
{
    int largest = INT_MIN ;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]>largest){
            largest=nums[i];
        }
    }
    return largest ;
    
}

int main()
{
    int n;
    cout << "Enter the size of  array : " << endl;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    int ans = largestElement(nums);
    cout << "the largest element present is : " << ans << endl;

    return 0;
}