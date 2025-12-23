#include <iostream>
#include <vector>
using namespace std;

string tictactoe(vector<vector<int>>& moves){

    char grid[3][3];

    // initialize
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            grid[i][j] = ' ';
        }
    }

    // place moves
    for(int i = 0; i < moves.size(); i++){
        int r = moves[i][0];
        int c = moves[i][1];

        if(i % 2 == 0)
            grid[r][c] = 'X';
        else
            grid[r][c] = 'O';
    }

    // row & column check
    for(int i = 0; i < 3; i++){

        // row
        if(grid[i][0] != ' ' &&
           grid[i][0] == grid[i][1] &&
           grid[i][1] == grid[i][2]){
            return (grid[i][0] == 'X') ? "A" : "B";
        }

        // column
        if(grid[0][i] != ' ' &&
           grid[0][i] == grid[1][i] &&
           grid[1][i] == grid[2][i]){
            return (grid[0][i] == 'X') ? "A" : "B";
        }
    }

    // main diagonal
    if(grid[0][0] != ' ' &&
       grid[0][0] == grid[1][1] &&
       grid[1][1] == grid[2][2]){
        return (grid[0][0] == 'X') ? "A" : "B";
    }

    // anti diagonal
    if(grid[0][2] != ' ' &&
       grid[0][2] == grid[1][1] &&
       grid[1][1] == grid[2][0]){
        return (grid[0][2] == 'X') ? "A" : "B";
    }

    if(moves.size() == 9)
        return "Draw";

    return "Pending";
}




int main(){

    std::vector<std::vector<int>> moves = {{0,0},{1,1},{0,1},{0,2},{1,0},{2,0}};
    std::string  res =  tictactoe(moves);

    std::cout << res;

}