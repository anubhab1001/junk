/*
The Tribonacci sequence Tn is defined as follows: 
T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
Given n, return the value of Tn.
Example 1:
Input: n = 4
Output: 4
Example 2:
Input: n = 25
Output: 1389537
Constraints:
0 <= n <= 37
The answer is guaranteed to fit within a 32-bit integer, ie. answer <= 2^31 - 1.
*/
class Solution {
public:
    int tribonacci(int n) {
        vector<int> v(38) ;
        v[0] = 0 ;
        v[1] = 1 ;
        v[2] = 1 ;
        int sum = 0 ;
        for (int p = 3 ; p < 38 ; p++){
            sum = v[p-1]+v[p-2]+v[p-3];
            v[p] = sum ;
        }
        return v[n] ;
    }
};
