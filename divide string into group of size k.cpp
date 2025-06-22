/*
A string s can be partitioned into groups of size k using the following procedure:
The first group consists of the first k characters of the string, the second group consists of the next k characters of the string, and so on. 
Each element can be a part of exactly one group.
For the last group, if the string does not have k characters remaining, a character fill is used to complete the group.
Note that the partition is done so that after removing the fill character from the last group (if it exists) and concatenating all the groups in order, the resultant string should be s.
Given the string s, the size of each group k and the character fill, return a string array denoting the composition of every group s has been divided into, using the above procedure.
Example 1:
Input: s = "abcdefghi", k = 3, fill = "x"
Output: ["abc","def","ghi"]
Example 2:
Input: s = "abcdefghij", k = 3, fill = "x"
Output: ["abc","def","ghi","jxx"]
Constraints:
1 <= s.length <= 100
s consists of lowercase English letters only.
1 <= k <= 100
fill is a lowercase English letter.
*/

// O(n) - time and space complexity

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
     vector<string> v ;
     string str = "" ;
     for(int i = 0 ; i < s.length(); i += k){
        int track = i;
        for (int j = 0 ; j < k ; j++){
            if(track < s.length()){
                str = str + s[track] ;
                track ++ ;
            }
            else{
                str += fill;
            }

        }
        v.push_back(str);
        str = "" ;
     }
     //i += k shifting purpose or i = track -1 
     //track < s.length because in the last iteration there is one character left in the string and we have to add fill character , so the actual string length will be greater than s.length , if not this condition given it may crash due to undefined behaviour 
     //int j = v[v.size()-1].length() ;
    // v[v.size()-1].append(k-j , fill); //character add

    return v;
    }
};
