#include <iostream>
#include <vector>




void imageSmoother(std::vector<std::vector<int>>& img){


    int m = img.size();
    int n = img[0].size();

    std::vector<int> dirs = {-1 , 0 , 1};
std::vector<std::vector<int>> res(m, std::vector<int>(n, 0));

    for(int i =0; i < m; i++){


        for(int j = 0; j < n; j++){
            int total = 0;
            int count = 0;

            for (int dx:dirs){

                for (int dy:dirs){
                    int ni = i + dx;
                    int nj = j + dy;

                    if(ni >= 0 && ni < m && nj >=0 && nj < n){
                        total += img[ni][nj];
                        count ++;
                    }

                    
                }
            }
            res[i][j] = total / count;

        }


    }

      for(auto &row : res){
        for(int val : row){
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    




  




}



int main(){


    std::vector<std::vector<int>> img = {
        {100, 200, 100},
        {200, 50, 200},
        {100, 200, 100}
    };
    imageSmoother(img);

    return 0;
}