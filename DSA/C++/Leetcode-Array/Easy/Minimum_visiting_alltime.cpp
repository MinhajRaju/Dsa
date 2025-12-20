#include <iostream>
#include <vector>
#include <cmath>

int minTimeVisitAllPoint(std::vector<std::vector<int>>& points){

    int time = 0;
    for(int i = 1; i<points.size(); i++){


        int x1= points[i-1][0];
        int y1 = points[i-1][1];

        int x2 = points[i][0];
        int y2 = points[i][1];
    
        int dx = abs(x2 -x1);
        int dy = abs(y2 - y1);

        time += std::max(dx,  dy);
    }

    return time;
}


int main(){

    std::vector<std::vector<int>> points = {{1,1},{3,4},{-1,0}};
    std::cout << minTimeVisitAllPoint(points);
}

