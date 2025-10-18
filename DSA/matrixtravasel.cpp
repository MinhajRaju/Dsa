#include <iostream>
#include <vector>



int main(){


    std::vector<std::vector<int>> grid ={
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };

    int rows = grid.size();
    int cols = grid[0].size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols, 0));

    for (int i=0; i < rows ; i++){


        for(int j=0; j < cols; j++){

            int count = 0;

            for(int dx = -1; dx <= 1; dx++ ){

                for(int dy  = -1; dy <= 1; dy++){
                    
                    if(dx ==0 && dy==0)continue;

                    int ni = i + dx;
                    int nj = j + dy;

                    if (ni >= 0 && nj >= 0 && ni < rows && nj < cols ){
                        if(grid[ni][nj] == 1)count++;
                    }

                }
            }
            result[i][j] = count;
        }
    }

for (auto &row : result) {
        for (int x : row) std::cout << x << " ";
        std::cout << std::endl;
    }




}