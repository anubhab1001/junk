/*
You are given an integer array nums.

A special triplet is defined as a triplet of indices (i, j, k) such that:

0 <= i < j < k < n, where n = nums.length
nums[i] == nums[j] * 2
nums[k] == nums[j] * 2
Return the total number of special triplets in the array.

Since the answer may be large, return it modulo 109 + 7.

 

Example 1:

Input: nums = [6,3,6]

Output: 1

Explanation:

The only special triplet is (i, j, k) = (0, 1, 2), where:

nums[0] = 6, nums[1] = 3, nums[2] = 6
nums[0] = nums[1] * 2 = 3 * 2 = 6
nums[2] = nums[1] * 2 = 3 * 2 = 6
Example 2:

Input: nums = [0,1,0,0]

Output: 1

Explanation:

The only special triplet is (i, j, k) = (0, 2, 3), where:

nums[0] = 0, nums[2] = 0, nums[3] = 0
nums[0] = nums[2] * 2 = 0 * 2 = 0
nums[3] = nums[2] * 2 = 0 * 2 = 0
Example 3:

Input: nums = [8,4,2,8,4]

Output: 2

Explanation:

There are exactly two special triplets:

(i, j, k) = (0, 1, 3)
nums[0] = 8, nums[1] = 4, nums[3] = 8
nums[0] = nums[1] * 2 = 4 * 2 = 8
nums[3] = nums[1] * 2 = 4 * 2 = 8
(i, j, k) = (1, 2, 4)
nums[1] = 4, nums[2] = 2, nums[4] = 4
nums[1] = nums[2] * 2 = 2 * 2 = 4
nums[4] = nums[2] * 2 = 2 * 2 = 4
 

Constraints:

3 <= n == nums.length <= 105
0 <= nums[i] <= 105
*/

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int mod = 1e9 + 7;
        int n = nums.size();
       // int lcount = 0;
      //  int rcount = 0;
      //  int ans = 0;   -------------------------------947 TESTCASES PASSED
        /*for(int i = 0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                    if(nums[i]==nums[j]*2 && nums[k]==nums[j]*2){
                        count++;
                    }
                }
            }
        }*/
       /* for(int j=0;j<n;j++){
            lcount=0;
            for(int i = 0;i<j;i++){
                    if(nums[i]==nums[j]*2){
                        lcount+=1;
                    }     -------------------------------1100 TESTCASES PASSED
                }
                rcount=0;
                for(int k = j+1;k<n;k++){
                    if(nums[k]==nums[j]*2){
                        rcount+=1;
                    }
                }
                ans += (long long)lcount*rcount;
         }
        return ans % mod;
        */
        

        unordered_map<int, int> suffix;
        unordered_map<int, int> prefix;
        for(auto x : nums) suffix[x] += 1;
        long long ans = 0;
        for(auto x : nums){
            suffix[x] -= 1;
            ans += (long long)prefix[2 * x] * suffix[2 * x];
            prefix[x] += 1;
        }
        return ans % mod;
    }
};
