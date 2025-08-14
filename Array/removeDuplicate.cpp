#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) {
        return n;
    }

    int unique = 0;
    int current = 1;

    while (current < n) {
        if (nums[unique] == nums[current]) {
            current++;
        } else {
            nums[++unique] = nums[current];  
            // If you want to swap instead of assign:
            // swap(nums[++unique], nums[current]);
            current++;
        }
    }
    return unique + 1;
}

int main() {
    int n;
    cout << "Enter the size of the sorted array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int newLength = removeDuplicates(nums);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "New length: " << newLength << endl;

    return 0;
}
