#include <iostream>
#include <vector>
#include <algorithm>



double trimMean(std::vector<int>& arr ){

     int n = arr.size();

     std::sort(arr.begin() , arr.end());


     int k  = n / 20;

     double sum = 0;
     int count  = 0;


     for  (int i = k; i< n-k; i++){

        sum += arr[i];
        count++;
     }

     return sum / count;  

}



int main(){

    std::vector<int> arr = {6,2,7,5,1,2,0,3,10,2,5,0,5,5,0,8,7,6,8,0};


    std::cout << "The mean is " <<  trimMean(arr);

    


    return 0;
}