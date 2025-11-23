class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long y=0,n=x;
        while(n>0)
        {
            y*=10;
            y+=(n%10);
            n/=10;
        }
        return x==y;
    }
};