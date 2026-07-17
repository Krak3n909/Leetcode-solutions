class Solution {
public:
    string tictactoe(vector<vector<int>>& move) {
        vector<vector<char>> moves(3, vector<char>(3,'.'));
        
        int t = 1;
        for(auto a:move)
        {
            if(t == 1)
            {
                moves[a[0]][a[1]] = 'A';
            }
            else
            {
                moves[a[0]][a[1]] = 'B';
            }

            t *= -1;
        }


        if(moves[0][0] == moves[1][1] && moves[0][0] == moves[2][2])
        {
            if(moves[0][0] == 'A')
                return "A";
            else if(moves[0][0] == '.')
            {}
            else
                return "B";
        }
        if(moves[0][2] == moves[1][1] && moves[0][2] == moves[2][0])
        {
            if(moves[2][0] == 'A')
                return "A";
            else if(moves[2][0] == '.')
            {}
            else
                return "B";
        }
        int k = 0;
        for(int i = 0;i < 3;i++)
        {
            if(moves[k][i] == moves[k + 1][i] && moves[k][i] == moves[k + 2][i])
            {
            if(moves[k][i] == 'A')
                return "A";
            else if(moves[k][i] == '.')
            {}
            else
                return "B";
            }
        }
        
        k = 0;
        for(int i = 0;i < 3;i++)
        {
            if(moves[i][k] == moves[i][k + 1] && moves[i][k] == moves[i][k + 2])
            {
            if(moves[i][k] == 'A')
                return "A";
            else if(moves[i][k] == '.')
            {}
            else
                return "B";
            }
        }
        if(move.size() < 9)
        {
            return "Pending";
        }
        return "Draw";
    }
};