#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // brute force 
    
    // first pointer points the first element of array 
    // 2nd pointer points the second element of array 
    // check if the sum of value at 1st ans 2nd pointer pointing is equal to target or not 
    // if equal the return the indices 
    // else increment the pointers  

    // for(int i=0; i<nums.size(); i++ ){
    //     for(int j=1; j<nums.size(); j++){
    //         if(i==j){
    //             continue; 
    //         }
    //         if(nums[i] + nums[j] == target ){
    //             return {i,j} ;
    //         }
    //     }
    // }
    // return{};


    // optimal using two pointer just to return the values not indeces 

    // sort(nums.begin() , nums.end());
    // int left=0;
    // int right=nums.size()-1;
    // while(left < right ){
    //     if(nums[left]+nums[right]==target){
    //         return{left,right};
    //     }
    //     else if(nums[left]+nums[right] > target){
    //         right--;
    //     }
    //     else{
    //         left++;
    //     }
    // }
    // return{};    


    // optimal solution is using hash table 
    unordered_map<int, int> map; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }

    return {};    
}

int main() {
    
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}
