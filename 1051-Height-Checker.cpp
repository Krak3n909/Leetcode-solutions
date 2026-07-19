class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> k(heights.begin(), heights.end());

        sort(k.begin(), k.end());
        int c = 0;
        for(int i = 0;i < k.size();i++)
        {
            if(k[i] != heights[i])
            {
                c++;
            }
        }
        return c;
    }
};