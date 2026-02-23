1class Solution {
2public:
3    bool hasAlternatingBits(int n) {
4        int pr = n % 2;
5        if(!pr)
6        {
7            pr = 1;
8        }
9        else
10        {
11            pr = 0;
12        }
13        while(n > 0)
14        {
15            cout<<n<<endl;
16            int tmp = n % 2;
17            if(tmp == pr)
18            {
19                return false;
20            }
21            pr = tmp;
22            n = n >> 1;
23        }
24        return true;
25    }
26};