#include <iostream>
#include <vector>
#include <unordered_map>



int MissingNumberBruteForce(std::vector<int>& nums){

    int n = nums.size();    
    std::unordered_map<int  , int > mp;
     for (int v : nums) mp[v] = 1;

    for (int i = 0; i <= n; ++i) {
        if (mp.find(i) == mp.end()) return i;
    }
    return -1;
    
}




int main(){

    std::vector<int> nums = {1,6,4,2,3,5,7,0,9};

    int res = MissingNumberBruteForce(nums);
    std::cout << res;

    return 0;
}