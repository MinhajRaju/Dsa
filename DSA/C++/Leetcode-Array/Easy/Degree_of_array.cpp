#include <iostream>
#include <vector>
#include <unordered_map>



void DegreeofArray(std::vector<int>& nums){

    int n = nums.size();

    std::unordered_map<int  , int > mp;

    for(int i  = 0 ; i < n; i++){   
            mp[nums[i]]++;
    }

    int max_value = INT_MIN;
    
    for(auto &[key ,value] : mp){

        if (max_value < value){
            max_value = value;
        }
    }  

    std::vector<int> max_key;

    for(auto &[key ,value] : mp){

        if(value == max_value){
            max_key.push_back(key);
        }       
    }
 
    
    int min_length = nums.size();

    for(int key  : max_key){

        int start = -1  ,  end = -1;
        
        for(int i = 0; i < nums.size(); i++){

            if(nums[i] == key &&   start == -1) start = i;
            if(nums[i] == key)end = i;
        }
        int distance = end - start + 1;
        min_length = std::min(min_length, distance);
    
    }   


  std::cout << "Minimum length subarray with degree: " << min_length << std::endl;

  



}



int main(){

    std::vector<int> nums = {1,2,2,3,1,4,2};
    DegreeofArray(nums);

    return 0;
}