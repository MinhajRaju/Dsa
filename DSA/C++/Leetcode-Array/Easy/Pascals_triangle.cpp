#include <iostream>
#include <vector>





void PascalTriangelNaiveApproch(int numRows){

    std::vector<std::vector<int>> pascal(numRows);  

    for(int i = 0 ; i < numRows; i++){

        pascal[i].resize(i+1);
        pascal[i][0] = pascal[i][i] =  1;


        for (int j = 1; j < i; j++){

            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j]; 
        }
              


       
       
    }
    for(auto r : pascal) {
        for (auto val:r ){
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }   


}



int main(){

    int numsRows = 1;


    PascalTriangelNaiveApproch(numsRows);

    return 0;


}
