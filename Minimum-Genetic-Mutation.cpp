1class Solution {
2public:
3    bool check(string& a, string& b) {
4        if (a.size() != b.size()) {
5            return false;
6        }
7        int c = 0;
8        for (int i = 0; i < a.size(); i++) {
9            if (a[i] != b[i]) {
10                c++;
11            }
12        }
13        return c == 1;
14    }
15
16    int minMutation(string startGene, string endGene, vector<string>& bank) {
17        unordered_map<string, unordered_set<string>> k;
18
19        for (int j = 0; j < bank.size(); j++) {
20            if (startGene == bank[j] || !check(startGene, bank[j])) {
21                continue;
22            }
23            k[startGene].insert(bank[j]);
24        }
25        for (int i = 0; i < bank.size(); i++) {
26            for (int j = 0; j < bank.size(); j++) {
27                if (i == j || !check(bank[i], bank[j])) {
28                    continue;
29                }
30                k[bank[i]].insert(bank[j]);
31            }
32        }
33        unordered_map<string, int> z;
34        z[startGene] = 0;
35        queue<string> list;
36        list.push(startGene);
37        int res = -1;
38        while (!list.empty()) {
39            string first = list.front();
40            list.pop();
41            for (auto a : k[first]) {
42                cout << a << endl;
43                if (z.find(a) == z.end() || z[a] > (z[first] + 1)) {
44                    z[a] = z[first] + 1;
45                    list.push(a);
46                }
47            }
48        }
49        if (z.find(endGene) == z.end()) {
50            return -1;
51        } else {
52            return z[endGene];
53        }
54    }
55};