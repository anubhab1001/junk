/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
Example 1:
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
     //int count = 0;
     int track = 0;
     for(int i = 0 ; i < haystack.size() ; i++){
        track = i;
        int j = 0;
        for(j = 0 ; j < needle.size() ; j++){
            if(haystack[track] != needle[j]){
                break ;
            }
            track++;
        }
        if(j == needle.size()){
            return i;
        }
      /*  if(count > 1){
            break;
        }*/
     }   
    // if(count == 0){
        return -1;
     //}
     //else{
       // return track ;
     //}
    
    }
};
