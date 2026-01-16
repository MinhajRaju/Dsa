#include <iostream>
#include <vector>




int busyStudent(std::vector<int>& startTime , std::vector<int>& endTime , int queryTime){

    int studentCount = 0;

    int  n  = startTime.size();


    for(int i = 0 ; i < n ; i++){
        if(startTime[i] <= queryTime && endTime[i] >= queryTime){
            studentCount++;
        }
    }

     return studentCount;
}


int main(){

    std::vector <int> startTime = {1,2,3} ,   endTime = {3,2,7};
    int queryTime  = 4 ; 
    
    int res =  busyStudent(startTime , endTime , queryTime);
    std::cout  << res;
    return 0;
}