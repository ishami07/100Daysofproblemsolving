#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {

    // using bult-in functon
    //  sort(nums.begin() , nums.end());

    // brute force
    // for(int i=0; i< nums.size(); i++){
    //     for(int j=i+1; j< nums.size(); j++){
    //         if(nums[i]>nums[j]){
    //             swap(nums[i], nums[j]);
    //         }
    //     }
    // }

    // better solution
    // count number of 1's , 2's ,3's
    // that much of 1's , 2's ,3's in the save array respecively

    // optimal  solution
    int left = 0, mid = 0, right = nums.size()-1;
    while (mid <= right) {
        if (nums[mid] == 0) {
            swap(nums[left], nums[mid]);
            left++;
            mid++;
        } 
        else if (nums[mid] == 2) {
            swap(nums[mid], nums[right]);
            right--;
        } 
        else {
            mid++;
        }
    }

    // remember dutch national flag algorithm ....
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    cout << "Before sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    sortColors(nums);

    cout << "After sorting: ";
    for (int n : nums) cout << n << " ";
    cout << endl;

    return 0;
}
