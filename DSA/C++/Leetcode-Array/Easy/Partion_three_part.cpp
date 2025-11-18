#include <iostream>
#include <vector>

bool canThreePartsEqualSum(std::vector<int>& arr){

    int total = 0;
    for(int x : arr) total += x;

    if(total % 3 != 0) return false;

    int target = total / 3;

    int count = 0;
    int prefixSum = 0;

    for(int i = 0; i < arr.size(); i++){
        prefixSum += arr[i];

        if(prefixSum == target){
            count++;
            prefixSum = 0;
        }

        // 3ta part paile return true
        if(count == 2 && i != arr.size() - 1){
            return true;
        }
    }

    return false;
}

int main(){

    std::vector<int> arr = {0,2,1,-6,6,-7,9,1,2,0,1};

    if(canThreePartsEqualSum(arr)){
        std::cout << "True";
    }else{
        std::cout << "False";
    }
    return 0;
}
