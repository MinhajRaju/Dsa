#include <iostream>
#include <vector>




void Lcis(std::vector<int>& nums ){

    int n = nums.size();
    int count  = 1;
    for(int i=0; i < n ; i++){
        

        for(int j = i+1 ; j <n ; j++){           

            if(nums[i] < nums[j]){               
                count++;
                break;
            }
            if(nums[i] > nums[j]){
                count = 1;
                break;
            }
        }
 
    }
    std::cout << count;
   
}

//poper working
void Lcis2(std::vector<int>& nums){

    int n = nums.size();

    int count = 1;
    int max = 1;

    for(int i=1 ; i < n ;i++){

        if(nums[i] > nums[i-1]){
            count ++;
        }else{
            count = 1;
        }
        if(count > max){
        max = count;
    }

    }
   
  
    std::cout << max;

}




int main(){

    std::vector<int> nums = {1, 3, 5, 4, 7};

    //Lcis(nums);
    Lcis2(nums);

    return 0;
}