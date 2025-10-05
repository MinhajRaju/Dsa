#include <iostream>
#include <vector>
#include <unordered_map>



bool Contains_duplicate2(std::vector<int>& nums ,int k){

    int n = nums.size();
    for(int i =0 ; i < n ; i++){
        for (int j  = i+1; j < n ; j++){
            if(nums[i] == nums[j] && abs(i-j) <= k){
                return true;
            }
        }
    }
    return false;
}

bool Contains_duplicate2HashMap(std::vector<int>& nums,  int k){

    std::unordered_map<int , int> mp;

    int n = nums.size();

    for (int i = 0 ; i < n ; i++){      

        if(mp.find(nums[i]) != mp.end() && abs(i - mp[nums[i]]) <= k){
            return true;

        }


        mp[nums[i]] = i;

    }

    return false;



    
}




int main (){

    std::vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    //bool res  = Contains_duplicate2(nums , k);
    bool res = Contains_duplicate2HashMap(nums , k);

    std::cout << res;




}