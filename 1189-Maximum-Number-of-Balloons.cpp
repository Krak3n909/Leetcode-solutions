class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> count(26, 0);
        for(auto a : text)
        {
            count[a - 'a']++;
        }
        vector<char> letters = { 'b', 'a', 'n' };
        int mn = text.size();
        for(auto a : letters)
        {
            mn = min(mn, count[a - 'a']);
        }
        mn = min(mn, (count['l' - 'a'] / 2));
        mn = min(mn, (count['o' - 'a'] / 2));
        return mn; 
    }
};