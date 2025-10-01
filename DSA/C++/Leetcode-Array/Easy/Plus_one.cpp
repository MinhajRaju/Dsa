#include <iostream>
#include <vector>
#include <string>
#include <cmath>



void Plus_one_integer_conversation(std::vector<int>& nums){
    int n  = nums.size();
    int res = 0;   
    int i=0;
    while ( i  < n){

        res = (res*10) + nums[i];        
        i++;
    }
    res +=1;
    int k = (res == 0) ? 1 : (int)log10(res) + 1;
   
    std::vector<int> res2(k);
    for(int i = k -1; i >=0; i--){

        res2[i] = res % 10;

        res /= 10;

    }

    for(auto arr: res2) std::cout << arr << " ";
    std::cout << std::endl;
    
    //Problem with long integer number 
}



void Plus_one_leetcode(std::vector<int>& nums ){

    int n = nums.size()-1;
    int one = 1;    

    while(n >= 0){
      
        int sum = nums[n] + one;
       
        nums[n] = sum % 10;
        one  = sum / 10;
       
        n--;
    }

    if(one){
      
        std::vector<int> res(nums.size() +1);
        res[0] = one;
        
          for(int i = 0; i < nums.size(); i++){
            res[i + 1] = nums[i];
        }
    for (auto arr2 : res) std::cout << arr2 << " ";
    }
    


    //for (auto arr : nums) std::cout << arr << " ";
    
    

}







int main(){

    std::vector<int> nums = {9,9,9};

    //Plus_one(nums);
    Plus_one_leetcode(nums);
    return 0;

}