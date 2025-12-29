#include <iostream>
#include <vector>
#include <cmath> // abs() এর জন্য এটি দরকার

void FindtheDistance(std::vector<int>& arr1 , std::vector<int> &arr2 , int d){

  int n = arr1.size();
  int m = arr2.size();
  
  int count = 0;

  for (int i = 0 ; i < n ; i++){
    
    bool valid = true; 

    for(int j = 0 ; j < m ; j++){
        
        
        if(abs(arr1[i] - arr2[j]) <= d){
            valid = false; 
            break; 
        }
    }


    if(valid){
        count++;
    }
  }

  std::cout << count;
}

int main(){
    std::vector<int> arr1 = {4, 5, 8}; 
    std::vector<int> arr2 = {10, 9, 1, 8};
    int d = 2;
    FindtheDistance(arr1, arr2, d);

    return 0;
}