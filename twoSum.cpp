/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
Input: nums = [3,2,4], target = 6
Output: [1,2]
*/
// time complexity O(n^2) , space complexity O(1)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v ;
        for (int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if((nums[i] + nums[j]) == target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }
};
