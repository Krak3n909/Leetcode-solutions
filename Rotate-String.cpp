1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.size() != goal.size())
5        {
6            return false;
7        }
8
9        return ( s + s ).find(goal) != string::npos;
10    }
11};