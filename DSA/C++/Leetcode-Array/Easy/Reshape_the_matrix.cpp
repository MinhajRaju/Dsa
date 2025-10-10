#include <iostream>
#include <vector>



std::vector<std::vector<int>> ReshapeTheMatrix(std::vector<std::vector<int>>& mat){

    int n = mat.size();
    int r = 2; 
    int c = 2;

    int RxC = n * mat[0].size();
    std::cout << RxC << std::endl;
   
    std::vector<std::vector<int>> res;
    std::vector<int> row;

    if(r*c == RxC){
        
        for(int i= 0 ; i < n; i++){

            for (int j = 0; j < mat[0].size(); j++){
                row.push_back(mat[i][j]);
                if(row.size() == c){
                    res.push_back(row);
                    row.clear();
                }
            }
        }


    }else{
        return mat;
    };
    return res;
};




int main(){

    std::vector<std::vector<int>> mat = {{1,2,3,4}};
    std::vector<std::vector<int>> res = ReshapeTheMatrix(mat);
    for (auto r : res) {
            for (auto val : r) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    return 0;
}