class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0)
        {
            return 1;
        }
        int ans = 0;
        int c = 0;
        while (n) {
            c++;
            int tmp = n & 1;
            tmp ^= 1;
            n >>= 1;
            tmp <<= c - 1;
            ans ^= tmp;
        }
        return ans;
    }
};