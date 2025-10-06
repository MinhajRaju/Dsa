#include <iostream>
#include <vector>
#include <unordered_map>




void intersectionBruteForce(std::vector<int>& nums1 , std::vector<int>& nums2){

    int n1 = nums1.size();
    int n2 = nums2.size();

    std::vector<int> res;

    for (int i = 0 ; i < n2; i++){

        for (int j  = 0; j < n1; j++){

            if(nums2[i] == nums1[j]){


                bool already = false;

                for(int k  = 0; k < res.size(); k++){
                    if(res[k] == nums2[i]){
                        already  = true;
                        break;
                    }
                }

                if(!already){
                    res.push_back(nums2[i]);
                }

              break;
            
            }
        }

      

    }

   for (auto n : res) std::cout << n << " ";

}


void intersectionHashMap(std::vector<int>& nums1 , std::vector<int>& nums2){


    std::unordered_map<int ,  int> mp;
    std::vector<int> res;
    for(auto v  : nums1){
        mp[v] = true;
    }


    for(int i = 0; i < nums2.size(); i++){
        if(mp[nums2[i]]){   
            res.push_back(nums2[i]);
            mp[nums2[i]] = false;  
        } 
    }
    for (auto n : res) std::cout <<  n  << " ";
}




int main(){

    std::vector<int> nums1 = {1,2,2,1};
    std::vector<int> nums2 = {2,2};
    //intersectionBruteForce(nums1 ,  nums2);
    
    intersectionHashMap(nums1 , nums2);
    return 0;
}