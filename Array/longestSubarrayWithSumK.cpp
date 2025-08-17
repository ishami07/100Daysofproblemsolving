
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    int maxLength = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + nums[j];
            int length = j - i + 1;
            if (sum == k)
            {
                if (maxLength < length)
                {
                    maxLength = length;
                }
            }
        }
    }
    return maxLength;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "longest subarray length is: " << longestSubarray(nums, 4) << endl;
    return 0;
}
