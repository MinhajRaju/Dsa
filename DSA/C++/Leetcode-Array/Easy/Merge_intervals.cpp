#include <iostream>
#include <vector>
#include <algorithm>

void MergeInterval(std::vector<std::vector<int>>& interval){

        int n = interval.size();
        sort(interval.begin(), interval.end()); 
        std::vector<std::vector<int>> result;

        int start = interval[0][0];
        int end = interval[0][1];
     
       for(int i = 1; i < n; i++){

        int currStart = interval[i][0];
        int currEnd = interval[i][1];

            if(currStart < end){
                if (currEnd > end ){
                    end = currEnd;
                }
            }else{
                result.push_back({start , end});
                start = currStart;
                end = currEnd;
            }
       }

       result.push_back({start , end});

      

       
        for (int i = 0; i < result.size(); i++) {
        std::cout << "[" << result[i][0] << "," << result[i][1] << "]";
        if (i != result.size() - 1) std::cout << " ";
    }

    
    


}



int main(){

    std::vector<std::vector<int>> interval = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
   
       
};
    MergeInterval(interval);

    return 0;
}