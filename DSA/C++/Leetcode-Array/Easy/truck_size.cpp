#include <iostream>
#include <vector>
#include <algorithm>




int maxUnits(std::vector<std::vector<int  >>& boxTypes , int truckSize){
    
    sort(boxTypes.begin()  , boxTypes.end(),[](const std::vector<int>& a , const std::vector<int>& b){

        return a[1] > b[1];
    });


    int totalUnits = 0;


    for(int i  = 0; i < boxTypes.size(); i++){

        int numberOfboxes = boxTypes[i][0];
        int numberOfunits = boxTypes[i][1];


        if(truckSize >= numberOfboxes){
            totalUnits += numberOfboxes * numberOfunits;
            truckSize  -= numberOfboxes;  
        }else{
            totalUnits += numberOfunits * truckSize;
            truckSize = 0;
            break; 
        }


    }


    return totalUnits;





}




int main(){

    std::vector<std::vector<int>> boxTypes = {{5,10},{2,5},{4,7},{3,9}};

    int truckSize = 10;

    int res = maxUnits(boxTypes , truckSize);

    std::cout << res;




}