1class Solution {
2public:
3    int mySqrt(int x) {
4        long long l = 1, r = x, ans = 0;
5        while(l <= r)
6        {
7           long long mid = (l + r) / 2;
8           
9           if((mid * mid) == x)
10           {
11            return mid;
12           }  
13           else if((mid * mid) > x)
14           {
15            r = mid - 1;
16           } 
17           else
18           {
19            ans = mid;
20            l = mid + 1;
21           }
22        }
23        return ans;
24    }
25};