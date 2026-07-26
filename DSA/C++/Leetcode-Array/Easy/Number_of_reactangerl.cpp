#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


int countGoodRectangles(vector<vector<int>>& rectangles){



    unordered_map<int , int> mp;

    for(int i = 0 ; i < rectangles.size() ; i++){

        int minside;
        
        
        if(rectangles[i][0] < rectangles[i][1]){
            
            minside = rectangles[i][0];
          
        }else{
            minside = rectangles[i][1];
        }
        mp[minside]++;
    }


    int maxLen = 0;
    int maxCount = 0;

    for (auto x : mp){
        if(x.first > maxLen){
            maxLen = x.first;
            maxCount = x.second;
        }
    }

    return maxCount;

};



int main (){

    
    vector<vector<int>> rectangles = {{5,8},{3,9},{5,12},{16,5}};
    int res  = countGoodRectangles(rectangles);
    std::cout << res;
    return 0;
}