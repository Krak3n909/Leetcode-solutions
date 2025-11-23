class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long long c=0;
        long long j=x;
        while(x!=0)
        {
            c=c*10+x%10;
            x/=10;
        }
        cout<<c<<endl;
        return c==j;
    }
};