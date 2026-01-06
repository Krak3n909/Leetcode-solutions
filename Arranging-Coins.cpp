1class Solution {
2public:
3    int arrangeCoins(int n) {
4        int c = 0;
5        for(int i=1; i<= n;i++)
6        {
7            if(n>=i)
8            {
9                n-=i;
10                c++;
11            }
12            else if(n==(i-1))
13            {
14                c++;
15                break;
16            }
17            else
18            {
19                break;
20            }
21        }
22        return c;
23    }
24};