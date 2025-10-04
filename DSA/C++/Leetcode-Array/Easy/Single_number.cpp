#include <iostream>
#include <vector>
#include <unordered_map>



void SingleNumber(std::vector<int>& nums){
    std::unordered_map<int , int> mp;

    int n = nums.size();
    for(int i = 0; i < n ; i++ ){  
        mp[nums[i]] += 1 ; 
    }
    for (auto &p : mp) {

        if(p.second == 1){
            std::cout << p.first;
        }
    }

}


int main(){

   
    std::vector<int> nums = {2,2,1};
    SingleNumber(nums);


    return 0;
}



