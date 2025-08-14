//Second Largest Element
//Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

// brute force 
// sort the array and the find the second lagest , staring from last and take last element as largest and . nove toward left and seach immidiate smaller no. then lagest if found the return  

// better approach
// step 1 - find the largets element 

// step 2 - find the second largest element with the given condition as:
// secondlargest = int_min
// rum the loop from 0 to n  
// if(nums[i]>secondLarget && nums[i] != largest){
//     secondLargest= nums[i];
// }
// return second largest ;


// optimal approach

int secondlargestElement(const vector<int>& nums)
{
    int largest = nums[0] ;
    int secondlargest = INT_MIN ;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]>largest){
            secondlargest = largest ;
            largest=nums[i];
        }
        else if (nums[i]<largest && nums[i]>secondlargest)
        {
            secondlargest = nums[i];
        }
        
    }
    return secondlargest ;
    
}

int main()
{
    int n;
    cout << "Enter the size of  array : " << endl;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cin >> nums[i];
    }
    int ans = secondlargestElement(nums);
    if(ans != INT_MIN){
        cout << "the secondlargest element present is : " << ans << endl;
    }
    else{
        cout << "the secondlargest element is not  present  " << endl;
    }

    return 0;
}
