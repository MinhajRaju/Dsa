#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> LuckyNumber(std::vector<std::vector<int>>& nums){
    std::vector<int> result;
    int m  = nums.size(); // row 
    int n = nums[0].size(); // col
    
    for(int i = 0; i < m; i++){ 
        int minVal = nums[i][0];
        int minColIndex = 0;

        for(int j = 1; j < n ; j++){
            if(nums[i][j] < minVal){
                minVal = nums[i][j];
                minColIndex  = j;
            }
        }

        bool isMaxCol = true;

        for(int k = 0; k < m ; k++){
            if(nums[k][minColIndex] > minVal){
                isMaxCol = false;
                break;
            }
        }

        if (isMaxCol){
            result.push_back(minVal);
        }
   
       

    } 
    return result; 
}

int main(){
    std::vector<std::vector<int>> nums = {{3,7,8},{9,11,13},{15,16,17}};
    std::vector<int> res = LuckyNumber(nums);

   
    std::cout << "Lucky Number: ";
    for(int x : res) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}