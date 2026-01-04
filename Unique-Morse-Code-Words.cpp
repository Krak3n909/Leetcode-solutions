1class Solution {
2public:
3    int uniqueMorseRepresentations(vector<string>& words) {
4        
5        string s[26] = {".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
6                        "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
7                        "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
8                        "...-", ".--",  "-..-", "-.--", "--.."};
9        unordered_set<string> k;
10        for(auto a:words)
11        {
12            string tmp = "";
13            for(auto b:a)
14            {
15                tmp += s[b - 'a'];
16            }
17            k.insert(tmp);
18        }
19        return k.size();
20        return 1;
21
22    };
23};