#include <iostream>
#include <vector>



bool checkDoubleExists(std::vector<int>& arr){

 
    int n = arr.size();

    for(int i = 0; i < n; i++){

        int v = arr[i];

        for(int j = 0; j < n ; j++){

            if (i != j && v == 2*arr[j]){
                return true;
            }
        }
    }

   return false;

}








int main(){
    
    std::vector<int> arr  = {4,2,5,3};
    bool res = checkDoubleExists(arr);
    std::cout << res;

    return 0;
}