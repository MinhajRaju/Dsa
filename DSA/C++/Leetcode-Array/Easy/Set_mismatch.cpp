#include <iostream>
#include <vector>
#include <algorithm>

//wrong approch 
void SetMismatch(std::vector<int>& nums){

    sort(nums.begin() , nums.end());
    std::vector<int> res;
    int n  = nums.size();

    for(int i = 0 ; i < n-1 ; i ++){              
       if(nums[i] == nums[i+1]){               
         
                res.push_back(nums[i]);
                res.push_back( nums[i] + 1);        
        }

    }

    for (auto n :  res) std::cout << n;
}

void SetMismatch2(std::vector<int>& nums){

    sort(nums.begin() , nums.end());
    int n = nums.size();
    int duplicate = -1;
    int sum =  0;


    for(int i=0; i < n-1 ; i++){
        sum += nums[i];
        if(nums[i] == nums[i+1]){
            duplicate = nums[i];
        }
    }

    sum += nums[n-1]; 


    int expected = n*(n+1) /2;
    int missing = expected - (sum - duplicate);

    //std::cout << sum;
    std::cout << duplicate << missing; 
}   



void SetMismatch3(std::vector<int>& nums){

    sort(nums.begin() , nums.end());
    int n = nums.size();
    int duplicate = -1 ,  missing = -1; // এখনো duplicate নেই // এখনো missing নেই

    for(int i=0 ; i < n-1 ; i++){

        if(nums[i] == nums[i+1]){
            duplicate = nums[i]; // duplicate detect হলে এখানে সেট হবে
        }
        else if (nums[i] + 1 !=  nums[i + 1] ){
            missing = nums[i] + 1;  // missing detect হলে এখানে সেট হবে
        }
    }
// loop শেষ হলে যদি missing = -1 → মানে শেষ element missing
    if(missing == -1){
        missing = n;
    }

    std::cout << duplicate << missing;
}



int main(){

    std::vector<int> nums = { 1,2};
    //SetMismatch(nums);
    //SetMismatch2(nums);
    SetMismatch3(nums);
    return 0;
}