#include <bits/stdc++.h>
using namespace std;

// Brute force approach (O(n²))
// int majorityElement(vector<int>& nums) {
//     int prevtotal = 0;
//     int result;
//     for (int i = 0; i < nums.size(); i++) {
//         int element = nums[i];
//         int count = 0;
//         for (int j = 0; j < nums.size(); j++) {
//             if (element == nums[j]) {
//                 count++;
//             }
//         }
//         if (prevtotal < count) {
//             prevtotal = count;
//             result = nums[i];
//         }
//     }
//     return result;
// }

//------------------ Optimal approach: Boyer-Moore Voting Algorithm (O(n)) -------------------------------------------
int majorityElement(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; 

    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
