#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (isSorted(nums)) {
        cout << "The array is sorted in non-decreasing order." << endl;
    } else {
        cout << "The array is NOT sorted in non-decreasing order." << endl;
    }

    return 0;
}
