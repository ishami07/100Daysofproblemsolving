#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int size = nums.size();
    int nonZero = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] != 0) {
            swap(nums[nonZero], nums[i]);
            nonZero++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original Array: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    moveZeroes(nums);

    cout << "After Moving Zeroes: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
