#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    // method 1 = using hash map -- good 
    // method 2 = using xor operator --optimal 
    // method 3 = sort the array and traverse it through out --- not optimal

    
    int result = 0; 
    for(int i = 0; i < nums.size(); i++) {
        result = result ^ nums[i];
    }
    return result;
}

int main() {
    
    vector<int> nums = {4, 1, 2, 1, 2}; 
    int result = singleNumber(nums);
    cout << "Single Number: " << result << endl;

    return 0;
}
