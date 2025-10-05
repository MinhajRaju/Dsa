#include <iostream>
#include <vector>
#include <unordered_map>



bool Contains_duplicateBruteForce(std::vector<int>& nums){

    int n = nums.size();
    for(int i=0; i < n; i++){
        for(int j = i+1; j < n ; j++){
            if(nums[i] == nums[j] ){
                return true;
            }
        }        
    }
    return false;
}


bool Contains_duplicateHashMap(std::vector<int>& nums){

        std::unordered_map<int  , int >  mp;

        for (int v : nums){
            mp[v]++;
            
            if (mp[v] == 2){
                return true;
            }
        }
        return false;

}




int main(){
    std::vector<int> nums = {1,2,3,1};
   //bool res = Contains_duplicateBruteForce(nums);
   //std::cout << res;

    bool res  = Contains_duplicateHashMap(nums);
    std::cout << res;
    return 0;
}