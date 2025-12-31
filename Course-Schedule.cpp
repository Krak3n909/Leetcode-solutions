1class Solution {
2public:
3    bool canFinish(int n, vector<vector<int>>& prerequisites) {
4        vector<int> adj[n];
5        vector<int> indegree(n, 0);
6        vector<int> ans;
7        for(auto x: prerequisites)
8        {
9            adj[x[0]].push_back(x[1]);
10            indegree[x[1]]++;
11        }
12
13        queue<int> q;
14        for(int i=0; i< n;i++)
15        {
16            if(indegree[i] == 0)
17            {
18                q.push(i);
19            }
20        }
21        
22        while(!q.empty())
23        {
24            auto t = q.front();
25            ans.push_back(t);
26            q.pop();
27
28            for(auto x: adj[t])
29            {
30                indegree[x]--;
31                if(indegree[x] == 0)
32                {
33                    q.push(x);
34                }
35            }
36        }
37        return ans.size() == n;
38    }
39};