#include <iostream>
#include <vector>


bool validMountainArray(std::vector<int>& arr){

    int n  = arr.size();
    

    if (n < 3) return false;


    bool increasing = false;
    bool decreasing = false;


    int j  = 1;

    for (int i = 0 ; i < n-1;  i++){


        if (arr[i] == arr[j]) return false;
 
        if(!decreasing && arr[i] < arr[j]){
            increasing = true;
        
        }
        
        else if(arr[i] > arr[j]){
            if (!increasing) return false;
            decreasing = true;
        }
          else if (decreasing && arr[i] < arr[j]) {
            return false;
        }
        
        j++;

    }   
    return increasing && decreasing;

}



int main(){
    std::vector<int>  arr  = {0,2,3,4,5,2,1,0};
    bool res  = validMountainArray(arr);
    std::cout << res;

    return 0;


}