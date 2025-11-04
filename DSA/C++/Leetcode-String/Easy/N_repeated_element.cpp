#include <iostream>
#include <vector>
#include <unordered_map>



void repeatedNTimes(std::vector<int>& nums){

    std::unordered_map<int , int > mp;

    for(auto i : nums){
        mp[i]++;  
        
         if(mp[i] > 1){
            std::cout << i;
        }
    }
  


}




int main(){

    std::vector<int> nums = {1,2,3,3};

    repeatedNTimes(nums);

    return 0;
}