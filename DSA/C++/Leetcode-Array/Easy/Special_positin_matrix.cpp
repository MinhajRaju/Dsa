#include <iostream>
#include <vector>



void numSpecial(std::vector<std::vector<int>>& mat){


    int rows = mat.size();
    int cols = mat[0].size();

    std::vector<int> rowCount(rows , 0);
    std::vector<int> colCount(cols , 0);


    for (int i =0; i < rows ; i++){

        for (int j=0; j < cols; j++){

            if(mat[i][j] == 1){
                rowCount[i]++;
                colCount[j]++;
            }
        }
    }


    int specialPostions = 0;

    for(int i =0; i<rows; i++){

        for(int j =0; j < cols; j++){

            if(mat[i][j] == 1 && rowCount[i] == 1 && colCount[j] == 1){
                specialPostions++;
            }
        }
    }

    std::cout << specialPostions;




}



int main(){

    std::vector<std::vector<int>> mat = {{1, 0, 0}, {0, 0, 1},{1, 0, 0}};

    numSpecial(mat);


   return 0;


}