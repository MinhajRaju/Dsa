#include <iostream>
#include <vector>




void RangeSumQueryBruteForce(std::vector<int>& nums ,int start  ,  int end){

    int starts = start;
    int ends = end;

    int sum = 0;
    
    
    for (int i = starts; i <= ends ; i++){

        sum  += nums[i]; 
    }

    std::cout << sum;


}






class NumArray{

public:
    std::vector<int> prefix;

    NumArray(std::vector<int>& nums){
        int n  =  nums.size();
        prefix.resize(n+1 );


        for(int i = 0 ; i < n; i++){
            prefix[i+1] = prefix[i] + nums[i];
        }


     for(auto n : prefix) std:: cout << n << " " ;

    }
   
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];
    }

}; 





int main(){

    std::vector<int> nums = {-2, 0, 3, -5, 2, -1};

    NumArray obj(nums);
    std::cout << obj.sumRange(0, 2) << std::endl;
    std::cout << obj.sumRange(2, 5) << std::endl;
    //RangeSumQueryBruteForce(nums  , 0  ,  5);
    return 0;
}