1class Solution {
2public:
3    vector<int> findOrder(int num, vector<vector<int>>& prerequisites) {
4        vector<vector<int>> graph(num, vector<int>());
5        vector<int> indegree(num,0);
6        for(auto a: prerequisites)
7        {
8            graph[a[1]].push_back(a[0]);
9            indegree[a[0]]++;
10        } 
11        queue<int> q;
12        int visited = 0;
13        for(int i=0; i<num;i++ )
14        {
15            if(indegree[i]==0)
16            {
17                q.push(i);
18                visited++;
19            }
20        }
21        vector<int> res;
22        while(!q.empty())
23        {
24            int t = q.front();
25            q.pop();
26            res.push_back(t);
27            for(auto a:graph[t])
28            {
29                indegree[a]--;
30                if(indegree[a]==0)
31                {
32                    q.push(a);
33                    visited++;
34                }
35            }
36        }
37        if(visited == num)
38        {
39            return res;
40        }
41        else
42        {
43            return {};
44        }
45
46        
47    }
48};