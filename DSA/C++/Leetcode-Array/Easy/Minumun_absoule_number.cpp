#include <iostream>
#include <vector>
#include <algorithm>


void minimumAbsDifference(std::vector<int>& arr){

    sort(arr.begin() , arr.end());

    int mindiff = INT_MAX;

    for(int i = 1; i < arr.size(); i++){

            int diff = arr[i] - arr[i-1];
            if(diff < mindiff){
                mindiff=  diff;
            }
    }

    std::vector<std::vector<int>> result;

    for(int i = 1 ; i < arr.size() ; i++){

        if(arr[i] - arr[i-1] == mindiff){
            result.push_back({arr[i-1] , arr[i]});
        }
    }

    for(auto x :result) std::cout  << x[0] <<  " " << x[1] ;
}


int main(){



    std::vector<int> arr =  {4,2,1,3};
    minimumAbsDifference(arr);
    return 0;
}