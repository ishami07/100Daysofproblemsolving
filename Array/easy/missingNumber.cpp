#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    // method 1 using hash map

    // method 2 using Sum
    int sumOneToN = (n * (n + 1)) / 2;

    int sumArray = 0;
    for (int i = 0; i < n; i++)
    {
        sumArray += nums[i];
    }
    return sumOneToN - sumArray;

    // method 3 - using xor

    // int xor1 = 0, xor2 = 0;
    // for (int i = 1; i <= nums.size(); i++){
    //     xor1 = xor1 ^ i;
    // }
    // for (int i = 0; i < nums.size(); i++){
    //     xor1 = xor1 ^ nums[i];
    // }
    // return xor1 ^ xor2;
}

int main()
{
    vector<int> nums = {3, 0, 1}; // Example input
    cout << "Missing number is: " << missingNumber(nums) << endl;
    return 0;
}
