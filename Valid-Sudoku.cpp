1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        for (int i = 0; i < 9; i++) {
5            vector<int> k(9, 0);
6            for (int j = 0; j < 9; j++) {
7                if (board[i][j] == '.') {
8                    continue;
9                } else {
10                    int tmp = board[i][j] - '0';
11                    if (k[tmp - 1]) {
12                        return false;
13                    } else {
14                        k[tmp - 1] = 1;
15                    }
16                }
17            }
18        }
19
20        for (int i = 0; i < 9; i++) {
21            vector<int> k(9, 0);
22            for (int j = 0; j < 9; j++) {
23                if (board[j][i] == '.') {
24                    continue;
25                } else {
26                    int tmp = board[j][i] - '0';
27                    if (k[tmp - 1]) {
28                        return false;
29                    } else {
30                        k[tmp - 1] = 1;
31                    }
32                }
33            }
34        }
35
36        for (int ii = 0; ii < 3; ii++) {
37            for (int jj = 0; jj < 3; jj++) {
38                vector<int> k(9, 0);
39                for (int i = ii * 3; i < ii * 3 + 3; i++) {
40                    for (int j = jj * 3; j < jj * 3 + 3; j++) {
41                        if (board[i][j] == '.') {
42                            continue;
43                        } else {
44                            int tmp = board[i][j] - '0';
45                            if (k[tmp - 1]) {
46                                return false;
47                            } else {
48                                k[tmp - 1] = 1;
49                            }
50                        }
51                    }
52                }
53            }
54        }
55        return true;
56    }
57};