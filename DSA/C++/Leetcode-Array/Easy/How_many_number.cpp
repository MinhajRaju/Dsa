#include <iostream>
#include <vector>

std::vector<int> smallerNumberThanCurrent(std::vector<int>& nums){

   int n  = nums.size();

   std::vector<int> ans;

   for(int i = 0; i < n ; i++){
       
       int  count = 0 ;
       for(int j = 0; j < n; j++){

          if(nums[i] != nums[j] && nums[i] > nums[j]){
                 count++;
          }
       }
       ans.push_back(count);
       count  = 0;

   }
   
return ans;
}






int main(){

    std::vector<int> nums  = {8,1,2,2,3};
    std::vector  res  = smallerNumberThanCurrent(nums);

    for(auto x : res ){

        std::cout << x << " ";
    }
    return 0;

}