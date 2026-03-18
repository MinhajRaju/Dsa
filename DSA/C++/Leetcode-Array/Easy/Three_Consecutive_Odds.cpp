#include <iostream>
#include <vector>

bool threeCosecutiveOdds(std::vector<int>& arr1 ){

    int count =  0;

    for(int i = 0 ; i < arr1.size(); i++){

        if(arr1[i] % 2  == 0 ){

            count = 0;

        }
        else{
            count++;
        }

       

    }

    if(count != 3){
        return false;
    }
    return true;



}



int main(){

    std::vector<int> arr1 = {2,6,4,1};
    std::cout << "Example 1" << (threeCosecutiveOdds(arr1) ? "True" : "False") << std::endl;


    std::vector<int> arr2  = {1, 2, 34, 3, 4, 5, 7, 23};
    std::cout << "Example 2" << (threeCosecutiveOdds(arr2) ? "True" : "False") << std::endl;

 

    return 0;
}