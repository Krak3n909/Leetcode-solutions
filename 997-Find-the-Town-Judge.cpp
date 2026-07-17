class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size() == 0)
        {
            if(n == 1)
            {
                return 1;
            }
            return -1;
        }
        unordered_map<int, int> k;
        for(auto a: trust)
        {
            k[a[1]]++;
            k[a[0]]--;
        }
        for(auto a:k)
        {
            if(a.second == n - 1)
            {
                return a.first;
            }
        }
        return -1;
    }
};