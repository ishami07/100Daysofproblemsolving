#include <iostream>
#include <vector>
using namespace std;

int binarSearch(const vector<int>& nums, int target)
{

    int left = 0;
    int right = nums.size() - 1;
    // int mid = (left+right)/2;
    // int mid = left + (right - left) / 2; // to avoid overflow
    while (left <= right)
    {
        int mid = left + (right - left) / 2 ;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
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

    int target;
    cout << "Enter the target :" << endl;
    cin >> target;

    int ans = binarSearch(nums, target);
    cout << "the target is present at index: " << ans << endl;

    return 0;
}