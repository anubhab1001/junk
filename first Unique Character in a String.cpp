/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
*/







class Solution {
public:
    int firstUniqChar(string s) {
        
      /*  vector<int> v;
    for (int j = 0 ; j < s.length() ; j++){
        int count = 0 ;
        for(int i  = 0 ; i < s.length() ; i++){
            if(s[j] == s[i]){
                count ++ ;
            }
        }
        if(count == 1){
            v.push_back(j);
        }
    }
    return v.size() > 0 ? v[0] : -1 ;*/
    vector<int>freq(26,0);
for(char c:s){
freq[c-'a']++;
}
for(int i=0;i<s.size();i++){
if(freq[s[i]-'a']==1){
return i;
}
}
return -1;
    }
};
