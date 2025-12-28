1class Solution {
2public:
3
4    int di[4] = {0,0,1,-1};
5    int dj[4] = {1,-1,0,0};
6
7
8    void dfs(int i,int j, vector<vector<char>>& board)
9    {
10        board[i][j]='#';
11        for(int n=0;n<4;n++)
12        {
13            int ti = i + di[n];
14            int tj = j + dj[n];
15            if( ti>=0 && ti <board.size() && tj >= 0 && tj < board[0].size() && board[ti][tj]=='O')
16            {
17                dfs(ti,tj,board);
18            }
19        }
20    }
21
22    void solve(vector<vector<char>>& board) {
23
24        for (int j = 0; j < board.size(); j++) {
25            if (board[j][0]=='O')
26                {
27                    dfs(j,0, board);
28                }
29        }
30
31        for (int j = 0; j < board.size(); j++) {
32            if (board[j][board[0].size()-1]=='O')
33                {
34                    dfs(j,board[0].size()-1, board);
35                }
36        }
37        
38        for (int j = 0; j < board[0].size(); j++) {
39            if (board[0][j]=='O')
40                {
41                    dfs(0,j,board);
42                }
43        }
44        for (int j = 0; j < board[0].size(); j++) {
45            if (board[board.size()-1][j]=='O')
46                {
47                    dfs(board.size()-1,j,board);
48                }
49        }
50
51        
52        for(auto a:board)
53        {
54            for(auto b:a)
55            {
56                cout<<b<<" ";
57            }
58            cout<<endl;
59        }
60
61        for(int i=0;i<board.size();i++)
62        {
63            for(int j=0;j<board[i].size();j++)
64            {
65                if(board[i][j]=='#')
66                {
67                    board[i][j]='O';
68                }
69                else if(board[i][j]=='O')
70                {
71                    board[i][j]='X';
72                }
73            }
74        }
75
76    }
77};