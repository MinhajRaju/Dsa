#include  <iostream>
#include <vector>

void checkStraightLine(std::vector<std::vector<int>>& coordinates){
    //donee
    int x1 = coordinates[0][0];
    int y1 = coordinates[0][1];

    int x2 = coordinates[1][0];
    int y2 = coordinates[1][1];

    for(int i = 2; i < coordinates.size(); i++) {

        int x3 = coordinates[i][0];
        int y3 = coordinates[i][1];

        if( (y2 - y1) * (x3 - x1) != (y3 - y1) * (x2 - x1) ) {
            std::cout << 0;
        }
    }

    std::cout << 1;

}


int main(){

    std::vector<std::vector<int>> coordinates = {{1,2},{2,3},{3,4},{4,5},{5,6}};
    checkStraightLine(coordinates);
    return 0;
}