#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& nums, int start, int end) {
    while (start <= end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // handle if k > n

    // Step 1: Reverse the whole array
    rotateArray(nums, 0, n - 1);

    // Step 2: Reverse first k elements
    rotateArray(nums, 0, k - 1);

    // Step 3: Reverse the rest
    rotateArray(nums, k, n - 1);
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original Array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    rotate(nums, k);

    cout << "Rotated Array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
