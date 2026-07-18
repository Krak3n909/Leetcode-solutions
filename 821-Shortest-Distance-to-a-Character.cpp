class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> k(n, INT_MAX);
        for(int i = 0;i < n;i++)
        {
            if(s[i] == c)
            {
                k[i] = 0;
            }
        }
        int count = -1;
        for(int i = 0;i < n;i++)
        {
            if(k[i] == 0)
            {
                count = 0;
            }
            else
            {
                if(count == -1)
                {
                    continue;
                }
                else
                {
                    count++;
                    k[i] = min(k[i], count);
                }
            }
        }

        count = -1;
        for(int i = n - 1;i >= 0;i--)
        {
            if(k[i] == 0)
            {
                count = 0;
            }
            else
            {
                if(count == -1)
                {
                    continue;
                }
                else
                {
                    count++;
                    k[i] = min(k[i], count);
                }
            }
        }
        return k;
    }
};