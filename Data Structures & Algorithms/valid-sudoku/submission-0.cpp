class Solution {
public:
    bool checkNotSimilar(vector<char> vec){
        map<char,int> counts;
        for(int i =0;i<vec.size();i++){
            if(vec[i] == '.'){
                continue;
            }
            else{
                counts[vec[i]]++;
                if(counts[vec[i]] > 1){
                    return true;
                }
            }
        }
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0 ;i<9;i++){
            bool a = checkNotSimilar({board[i][0],board[i][1],board[i][2]});
            bool b = checkNotSimilar({board[i][3],board[i][4],board[i][5]});
            bool c = checkNotSimilar({board[i][6],board[i][7],board[i][8]});
            bool d = checkNotSimilar(board[i]);
            if(a || b || c || d){
                return false;
            }
        }
        for(int i = 0 ;i<9;i++){
            bool a = checkNotSimilar({board[0][i],board[1][i],board[2][i]});
            bool b = checkNotSimilar({board[3][i],board[4][i],board[5][i]});
            bool c = checkNotSimilar({board[6][i],board[7][i],board[8][i]});
            bool d = checkNotSimilar({board[0][i],board[1][i],board[2][i],board[3][i],board[4][i],board[5][i],board[6][i],board[7][i],board[8][i]});
            if(a || b || c || d){
                return false;
            }
        }
        bool firstMatrixCheck = checkNotSimilar({board[0][0],board[0][1],board[0][2],
        board[1][0],board[1][1],board[1][2],board[2][0],board[2][1],board[2][2]});
        bool secondMatrixCheck = checkNotSimilar({board[0][3],board[0][4],board[0][5],
        board[1][3],board[1][4],board[1][5],board[2][3],board[2][4],board[2][5]});
        bool thirdMatrixCheck = checkNotSimilar({board[0][6],board[0][7],board[0][8],
        board[1][6],board[1][7],board[1][8],board[2][6],board[2][7],board[2][8]});
        bool fourthMatrixCheck = checkNotSimilar({board[3][0],board[3][1],board[3][2],
        board[4][0],board[4][1],board[4][2],board[5][0],board[5][1],board[5][2]});
        bool fifthMatrixCheck = checkNotSimilar({board[3][3],board[3][4],board[3][5],
        board[4][3],board[4][4],board[4][5],board[5][3],board[5][4],board[5][5]});
        bool sixthMatrixCheck = checkNotSimilar({board[3][6],board[3][7],board[3][8],
        board[4][6],board[4][7],board[4][8],board[5][6],board[5][7],board[5][8]});

        bool seventhMatrixCheck = checkNotSimilar({board[6][0],board[6][1],board[6][2],
        board[7][0],board[7][1],board[7][2],board[8][0],board[8][1],board[8][2]});
        bool eigthMatrixCheck = checkNotSimilar({board[6][3],board[6][4],board[6][5],
        board[7][3],board[7][4],board[7][5],board[8][3],board[8][4],board[8][5]});
        bool ninthMatrixCheck = checkNotSimilar({board[6][6],board[6][7],board[6][8],
        board[7][6],board[7][7],board[7][8],board[8][6],board[8][7],board[8][8]});

        if(firstMatrixCheck || secondMatrixCheck || thirdMatrixCheck || fourthMatrixCheck 
        || fifthMatrixCheck || sixthMatrixCheck || seventhMatrixCheck || eigthMatrixCheck || ninthMatrixCheck){
            return false;
        }
        return true;
    }
};
