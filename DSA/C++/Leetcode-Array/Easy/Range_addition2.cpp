#include <iostream>
#include <vector>
using namespace std;

void RangeAddition(std::vector<std::vector<int>>& ops){

    int m = 3 , n = 3;

    std::vector<std::vector<int>> zero;

    for(int i = 0; i < m; i++){
        
        std::vector<int> row;
        for (int j = 0; j < n; j++){
            row.push_back(0);
        }
        zero.push_back(row);
    }
    
    
    for(int i=0; i < ops.size(); i++ ){

         for(int j = 0; j < ops[i][0]; j++){
        
          
            for (int k = 0; k < ops[i][1]; k++){
                
               zero[j][k]++;
            }
            
    }
    }
    for (auto r : zero) {
        for (auto c : r) {
            std::cout << c << " ";
        }
        std::cout << "\n";
    }


    int maxVal = 0;
    for (auto &row : zero) {
        for (auto &val : row) {
            maxVal = std::max(maxVal, val);
        }
    }

    int countMax = 0;
    for (auto &row : zero) {
        for (auto &val : row) {
            if (val == maxVal) {
                countMax++;
            }
        }
    }

    std::cout << countMax;
}

//Another cleaver approch 
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
    
        if (ops.empty()) return m * n;

        int minRow = m;
        int minCol = n;

      
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i][0] < minRow) minRow = ops[i][0];
            if (ops[i][1] < minCol) minCol = ops[i][1];
        }

        return minRow * minCol;
    }
};




int main(){

    std::vector<std::vector<int>> ops = {


        {2,2},
        {3,3}
    }; 

    RangeAddition(ops);

    return 0;
    
}