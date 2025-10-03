#include <iostream>
#include <vector>



void getRow(int rowIndex){

    std::vector<int> pt(rowIndex + 1  , 1);



    for(int  i = 2; i <= rowIndex; i++){

        for(int j =i -1 ; j >=1; j--){
            pt[j] = pt[j-1] + pt[j];
        }
    
    }



    for (auto p : pt){

        std::cout << p;
    }


}



int main(){

    int rowIndex = 4;
    getRow(rowIndex);    


    return 0;
}