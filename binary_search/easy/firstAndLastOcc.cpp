#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOcc(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    int ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

vector<int> searchRange(vector<int>& nums, int target) {
    // brute force 
    // start traversing an array and find the first orrurence and store it in a variable and so on 
    // int firstOcc = -1;
    // int lastOcc = -1;
    // int count = 0;
    // for(int i=0 ; i<nums.size(); i++ ){
    //     if(nums[i]==target){
    //         if(firstOcc == -1){
    //             firstOcc = i;
    //         }
    //         lastOcc=i;
    //     }   
    // }
    // return{firstOcc,lastOcc}; 

    // as the array is sorted we can find the first and last occurance by using binary search 

    int first = firstOcc(nums, target);
    int last = lastOcc(nums, target);
    return {first, last};
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    vector<int> ans = searchRange(nums, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
