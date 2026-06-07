1class Solution {
2public:
3    bool isLetter(char c) {
4        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
5            return true;
6        }
7        return false;
8    }
9
10    string reverseOnlyLetters(string s) {
11        int i = 0, j = s.size() - 1;
12        while (i < s.size() && !isLetter(s[i])) {
13            i++;
14        }
15        while (j >= 0 && !isLetter(s[j])) {
16            j--;
17        }
18        while (i < j) {
19            swap(s[i++], s[j--]);
20            while (i < s.size() && !isLetter(s[i]) ) {
21                i++;
22            }
23            while (j >= 0 && !isLetter(s[j])) {
24                j--;
25            }
26        }
27        return s;
28    }
29};