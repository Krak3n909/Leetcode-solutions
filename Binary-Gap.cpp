1class Solution {
2public:
3    int binaryGap(int n) {
4        int maxDist = 0;
5        int lastSeen = -1;
6        int count = 0;
7        while(n)
8        {
9            count++;
10            if(n % 2 == 1)
11            {
12                if(lastSeen == -1)
13                {
14                    lastSeen = count;
15                }
16                else
17                {
18                    maxDist = max(maxDist, abs(count - lastSeen));
19                    lastSeen = count;
20                }
21            }
22            n /= 2;
23        }
24        return maxDist;
25    }
26};