#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    // brute force

    // int maxSum=INT_MIN;
    // for(int i=0; i<nums.size(); i++){
    //     int sum=0;
    //     for(int j=i; j<nums.size(); j++){
    //         sum=sum+nums[j];
    //         if(sum>maxSum){
    //             maxSum=sum;
    //         }
    //     }
    // }
    // return maxSum;

    // optimal solution using kadane's algorithm

    // int currentSum = nums[0];
    // int maxSum = nums[0];
    // for(int i=1; i<nums.size(); i++){
    //     currentSum = max(nums[i] , currentSum+nums[i]);
    //     maxSum=max(currentSum,maxSum);
    // }
    // return maxSum;


    // another implementation of kadane's algo

    int maxSum = nums[0];
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum = sum + nums[i];
        maxSum = max(maxSum, sum);
        if (sum < 0) {
            sum = 0; // reset when sum goes negative
        }
    }
    return maxSum;
}

int main() {
    
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; 

    int result = maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
