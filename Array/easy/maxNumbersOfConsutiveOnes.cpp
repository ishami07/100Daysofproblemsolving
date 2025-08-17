#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int counter = 0;
    int max = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==1){
            counter++;
            if(counter>max){
                max=counter;
            }
        }
        else{
            counter=0;
        }
    }
    return max;
}

int main() {
    vector<int> nums = {1,1,0,1,1,1}; 
    cout << "Max consecutive ones: " << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
