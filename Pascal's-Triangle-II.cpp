1class Solution {
2public:
3    vector<int> getRow(int rowIndex) {
4        vector<int> row(1, 1);
5        for (int i = 0; i < rowIndex; i++) {
6            vector<int> newRow;
7            newRow.push_back(1);
8            for (int j = 1; j <= i; j++) {
9                int n = row[j] + row[j - 1];
10                newRow.push_back(n);
11            }
12            newRow.push_back(1);
13            row = newRow;
14        }
15        return row;
16    }
17};