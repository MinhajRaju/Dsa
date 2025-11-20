#include <iostream>
#include <vector>



void duplicateZeros(std::vector<int>& arr){

    int n  = arr.size();

    for(int i = 0 ; i < n -1 ; i++){

        if (arr[i] == 0){
            
            for(int j  = n-1 ; j > i; j--){
                arr[j] = arr[j-1];
            }

            arr[i+1] = 0;
            i++;
        }
    }

    for(auto x : arr ) std::cout << x;


}


int main(){

    std::vector<int> arr = { 1,0,2,3,0,4,5,0 };
    duplicateZeros(arr);

    return  0;
}