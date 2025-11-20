#include <iostream>
#include <vector>
#include <algorithm>

void heightChecker(std::vector<int>& heights){

    std::vector<int> sorted =  heights;
    sort(sorted.begin() , sorted.end());

    int count  = 0;
    for( int i = 0 ; i < heights.size() ; i++){

        if(heights[i] != sorted[i]){
            count++;
        }
    } 

    std::cout << count ;

}


int main (){

    std::vector<int> heights  = { 1,1,4,2,1,3 };
    heightChecker(heights);

    return 0;
}