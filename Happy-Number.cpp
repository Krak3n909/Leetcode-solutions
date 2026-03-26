1class Solution {
2public:
3    bool isHappy(int n) {
4        unordered_set<int> k;
5        int m = n;
6        int res = 0;
7        while (true) {
8            while (m > 0) {
9                int tmp = m % 10;
10                res += tmp * tmp;
11                m /= 10;
12            }
13            if (res == 1) {
14                return true;
15            } else {
16                if (k.find(res) == k.end()) {
17                    k.insert(res);
18                    m = res;
19                    res = 0;
20                } else {
21                    return false;
22                }
23            }
24        }
25        return false;
26    }
27};