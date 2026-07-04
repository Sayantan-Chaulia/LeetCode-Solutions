class Solution {
public:
    bool isPalindrome(int x) {
        long long REVn = 0;
        int dupn = x ;
        while(x > 0){
            int lastD = x % 10;
            x = (x / 10);
            REVn = ( REVn * 10 ) + lastD;
        }

        if( REVn == dupn ) return true;
        else return false;
    }
};