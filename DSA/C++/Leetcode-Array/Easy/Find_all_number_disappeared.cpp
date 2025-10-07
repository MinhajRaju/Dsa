#include <iostream>
#include <vector>
#include <unordered_map>


void  FindAllNumberDisappeared(std::vector<int>& nums){

    std::unordered_map<int  , bool> mp;
    std::vector<int> res;

    int n  = nums.size();
    for(auto v : nums){

        mp[v] = true;
    }

    for(int i = 1; i <= n ; i++){

        if(mp.find(i) == mp.end()){
            
            res.push_back(i);
        }
           
    }    
 for (auto s : res )std::cout << s;


};




int main(){

    std::vector<int> nums = {4,3,2,7,8,2,3,1};
    FindAllNumberDisappeared(nums);
    return 0;
}