#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(const vector<int> &nums, int target)
{

    int start = 0;
    int end = nums.size() - 1;
    int mid;
    while (start <= end){
        mid = start + (end - start) / 2;
        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return start;
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

    int ans = searchInsertPosition(nums, target);
    cout << "the target is present at index: " << ans << endl;

    return 0;
}