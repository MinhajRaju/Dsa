#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>


std::vector<int> frequencySort(std::vector<int>& nums ){

    int n  = nums.size();

    std::unordered_map<int  , int> freq;

    for(int x : nums){
        freq[x]++;
    }


   std::vector<std::vector<int>> buckets(n+1);

   for(auto it : freq){
    int value = it.first;
    int count = it.second;
    buckets[count].push_back(value);
   }



   std::vector<int> result;

   for(int f = 1 ; f <= n; f++){

        if (!buckets[f].empty()) {

                sort(buckets[f].begin(), buckets[f].end(), std::greater<int>());

             
                for (int num : buckets[f]) {
                    for (int i = 0; i < f; i++) {
                        result.push_back(num);
                    }
                }
            }

       


   }

    return result;

}




int main(){

    std::vector<int> nums =  {1, 1, 2, 2, 2, 3};    

    std::vector result  = frequencySort(nums);

    for (int x : result) {
        std::cout << x << " ";
    }


    return 0;   


}