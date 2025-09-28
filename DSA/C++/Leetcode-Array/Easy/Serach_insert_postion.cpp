#include <iostream>
#include <vector>
#include <string>




void Search_insert_postion(std::vector<int>& nums , int target){

    int n  = nums.size();
    int res = 0;
    for (int i = 0 ; i < n; i++){    
        for(int j = i ; j < n; j++){
            if(target == nums[j]){
                res = i;
                break;
            }else{                
            }
            if(nums[n-1] < target){
                res = n;
                break;            
            }
            if(target > nums[j] && target < nums[j+1] ){                
                res = j+1;
                break;
            }
            
            

        };   
    }
    
    std::cout << res;
}


void Search_insert_postion_two_pointer(std::vector<int>& nums , int target){
    
    int n  = nums.size();

    int res = 0;
    int pointer = 0;
    for(int i = 1 ;  i <  n ; i++){
        if(nums[i] == target){
            res = i;
            break;            
        }
        if(nums[n-1] < target){
            res = n;
        }
        if(nums[i] > target && nums[pointer] < target){            
            pointer++;
            res = pointer;          
        }   
    }
    std::cout << res;
}

void Search_insert_postion_logn(std::vector<int>& nums , int target){

    int left = 0 , right  = nums.size();
   
    int res = 0;
    while(left < right){
       int mid = (left + right ) / 2;
      
        if (target > nums[left]){
            res = left+1;
        }

       if(target  == nums[mid]){
           
            res = mid;
            break;
       }
       else if (target > nums[mid]){
            left ++;
       }
       else{
            right--;
       }
    }

    std::cout << res;

}



int main(){

    std::vector<int> nums = {1,3,5,6 , 10};
    int target = 10;
    
    //Search_insert_postion(nums , target);
    //Search_insert_postion_two_pointer(nums ,target);
    Search_insert_postion_logn(nums , target);


    return 0;
}

