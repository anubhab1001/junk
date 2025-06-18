//Given an integer x, return true if x is a palindrome, and false otherwise.
//Beware of overflow when you reverse the integer.
//solution 
class Solution {
public:
    bool isPalindrome(int x) {
        bool result = false ;
        long int sum = 0 ; // to reduce overflow error 
        int temp = x ;
        if(x < 0){
            result = false;
        }
        else{
            while(temp > 0){
                int rem = temp % 10 ;
                sum = (sum * 10) + rem ;
                temp = temp / 10;
             }
            if (x == sum ){
                result = true ;
                }
        }
        return result;
    }
};
