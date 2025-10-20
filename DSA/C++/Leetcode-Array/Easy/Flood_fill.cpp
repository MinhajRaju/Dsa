#include <iostream>
#include <vector>



void FloodFill(std::vector<std::vector<int>>& image){

 std::vector<std::vector<int>> directions = {
        {-1, 0}, {1, 0}, {0, 1}, {0, -1}
    };
     int m = image.size();
    int n = image[0].size();
    for(int i = 0; i < m; i++){


        for(int j = 0; j  < n; j++){


           if(image[i][j] == 0) continue;

           for(auto dir : directions){

            int ni = i + dir[0];
            int nj = j + dir[1];


            if(ni >= 0 && nj >= 0 && ni < m && nj < n && image[ni][nj] == 1 )
                image[ni][nj] = 2 ;
           }



        }

    }
     for(auto row : image) {
        for(auto val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

}



int main(){


    std::vector<std::vector<int>> image = {{1,1,1} , {1,1,0} , {1,0,1}};
    FloodFill(image );
    return 0;
}