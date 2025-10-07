#include <iostream>
#include <vector>




void ThirdMaximumNumber(std::vector<int>& nums){

    int n  = nums.size();
    int res;

    for(int  i = 0 ; i < n ; i++){

        if(n >= 2){
            for (int j  = 0 ; j < n ; j++){

            if(nums[i] > nums[j]){
                
                res = nums[i];
            }else{
              res = nums[j];  
            }
          
        }

        }else{

            if(nums[i] > nums[i+1]){
                res = nums[i];
            }else{
                res = nums[i+1];
            }
        }

        
    }
    std::cout << res;
   

}


 int ThirdMaximumNumberLeeCode(std::vector<int>& nums){

 int n = nums.size();

        // Step 1: প্রথম সর্বোচ্চ বের করো
        int first = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] > first) {
                first = nums[i];
            }
        }

        // Step 2: দ্বিতীয় সর্বোচ্চ বের করো (first বাদ দিয়ে)
        bool foundSecond = false;
        int second = first;
        for (int i = 0; i < n; i++) {
            if (nums[i] != first) {
                if (!foundSecond || nums[i] > second) {
                    second = nums[i];
                    foundSecond = true;
                }
            }
        }

        // Step 3: তৃতীয় সর্বোচ্চ বের করো (first, second বাদ দিয়ে)
        bool foundThird = false;
        int third = second;
        for (int i = 0; i < n; i++) {
            if (nums[i] != first && nums[i] != second) {
                if (!foundThird || nums[i] > third) {
                    third = nums[i];
                    foundThird = true;
                }
            }
        }

        // Step 4: যদি 3rd না পাওয়া যায়, তাহলে সর্বোচ্চটা return করো
        if (foundThird) {
            return third;
        } else {
            return first;
        }

}



int main(){

    std::vector<int> nums = {2,2,3,1};
    //ThirdMaximumNumber(nums);
    int res = ThirdMaximumNumberLeeCode(nums);
    
    std::cout <<  res;
    return 0;
}