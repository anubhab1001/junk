/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
Constraints:
1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
*/

//O(N)
// circular array concept
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     int n = nums.size();
     vector<int> v(n);
     for(int i = 0 ; i < n ; i++){
        v[(i+k)%n] = nums[i];
     }  
     for(int i = 0 ; i < n ; i++){
        nums[i] = v[i] ;
     } 
    }
};

/*
Reverse the entire array:
Example: ( [1,2,3,4,5,6,7] ) → ( [7,6,5,4,3,2,1] )
Reverse the first ( k ) elements:
Example: ( [7,6,5,4,3,2,1] ) → ( [5,6,7,4,3,2,1] )
Reverse the last ( n-k ) elements:
Example: ( [5,6,7,4,3,2,1] ) → ( [5,6,7,1,2,3,4] )
    */
