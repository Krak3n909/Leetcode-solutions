class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sum = 0;
        long long product = 1;
        while(n)
        {
            int tmp = n % 10;
            sum += tmp;
            product *= tmp;
            n /= 10;
        }
        return product - sum;

    }
};