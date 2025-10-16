#include <iostream>
#include <vector>


void  MaxAverage(std::vector<int>& nums , int k){

    int i = 0;   
    double max_avg;    
    while (i <= nums.size()-k){
        int j = 0;
        int sum =0;      
        
         while(j < k){
            sum += nums[i+j];
            j++; 
         }   
        
        double res =  double(sum) / k  ;

        if(max_avg < res){
            max_avg = res;
        }      
       i++;         

 
    }
    std::cout << max_avg;
  
}


void  MaxAverage2(std::vector<int>& nums , int k){
    int n = nums.size();
    int i = 0;           
    int sum = 0;
    int j = 0;
    double max_avg ;  
    while(i < k){
        sum += nums[i+j];
        i++; 
    }   

 
 
        

    int start = 0;
    while( i < n){
        sum += nums[i];
        sum -= nums[start];
        start++;

       double avg = double(sum) / k;

       if(max_avg < avg){
            max_avg = avg;
        }
        i++;      
    }

    std::cout << max_avg;
    
   
  
}


int main(){

    std::vector<int> nums = {1,12,-5,-6,50,3};
   
    int k = 4;
    //MaxAverage(nums , k);
    MaxAverage2(nums , k);



}