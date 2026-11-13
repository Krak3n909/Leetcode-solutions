class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n);
        if (k == 0) {
            return ans;
        } 
        else if (k > 0) 
        {
            for(int i = 0;i < n;i++)
            {
                int tmp = 0;
                for(int j = 1;j <= k;j++)
                {
                    int tgt = (i + j) % n;
                    tmp += code[tgt];
                }
                ans[i] = tmp;
            }
        }
        else
        {
            for(int i = 0;i < n;i++)
            {
                int tmp = 0;
                for(int j = -1;j >= k;j--)
                {
                    int tgt = (i + j) % n;
                    if( tgt < 0 )
                    {
                        tgt = n + tgt;
                    }
                    tmp += code[tgt];
                }
                ans[i] = tmp;
            }
        }

        return ans;
    }
};