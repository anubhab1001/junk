/*
Four Divisors
Solved
Medium
Topics
premium lock icon
Companies
Hint
Given an integer array nums, return the sum of divisors of the integers in that array that have exactly four divisors. If there is no such integer in the array, return 0.

 

Example 1:

Input: nums = [21,4,7]
Output: 32
Explanation: 
21 has 4 divisors: 1, 3, 7, 21
4 has 3 divisors: 1, 2, 4
7 has 2 divisors: 1, 7
The answer is the sum of divisors of 21 only.
Example 2:

Input: nums = [21,21]
Output: 64
Example 3:

Input: nums = [1,2,3,4,5]
Output: 0
 

Constraints:

1 <= nums.length <= 104
1 <= nums[i] <= 105
*/
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) {
            int cnt = 0;
            int sum = 0;

            for (int d = 1; d * d <= x; d++) {
                if (x % d == 0) {
                    int e = x / d;

                    cnt++;
                    sum += d;

                    if (e != d) {
                        cnt++;
                        sum += e;
                    }

                    if (cnt > 4) break;   // early stop
                }
            }

            if (cnt == 4) ans += sum;
        }

        return ans;
    }
};

/*class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        vector<int> v;
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int target = nums[i];
            for(int j = 1 ; j <= target ; j++){
                if(target % j == 0){
                    count++;
                }
            }
            if(count == 4){
            for(int j = 1 ; j <= target ; j++){
                if(target % j == 0){
                    v.push_back(j);
                }
            }
            }
            count = 0 ;
        }
        int sum = 0 ;
      for(int i = 0 ; i < v.size() ; i++){
        sum += v[i];
      }  
      return sum;
    }
};*/
