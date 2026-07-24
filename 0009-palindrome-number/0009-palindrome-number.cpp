class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long  rev = 0;
        int orignal = x;
        while (x > 0) {
            int a = x % 10;
            x = x / 10;
            rev = rev * 10 + a;
        }
        if (orignal == rev) {
            return true;
        }
        return false;
    }
};