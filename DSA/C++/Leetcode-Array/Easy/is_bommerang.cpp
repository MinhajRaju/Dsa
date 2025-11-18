#include <iostream>
#include <vector>
using namespace std;
//Mathmetical prblme 
bool isBoomerang(vector<vector<int>>& points) {
    int x1 = points[0][0], y1 = points[0][1];
    int x2 = points[1][0], y2 = points[1][1];
    int x3 = points[2][0], y3 = points[2][1];

    // cross product check
    return (x2 - x1)*(y3 - y1) != (y2 - y1)*(x3 - x1);
}

int main() {
    vector<vector<int>> points1 = {{1,1}, {2,3}, {3,2}};
   
    cout << (isBoomerang(points1) ? "true" : "false") << endl; // true
   

    return 0;
}
