#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
      
        sort(points.begin(), points.end());

        int max_width = 0;

   
        for (int i = 1; i < points.size(); i++) {
          
            int width = points[i][0] - points[i - 1][0];
            
           
            if (width > max_width) {
                max_width = width;
            }
        }

        return max_width;
    }
};


int main() {
    Solution sol;
    vector<vector<int>> points = {{8, 7}, {9, 9}, {7, 4}, {9, 7}};
    
    cout << "Widest Vertical Area: " << sol.maxWidthOfVerticalArea(points) << endl;
    
    return 0;
}