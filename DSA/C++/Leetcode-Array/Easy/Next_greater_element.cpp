#include <iostream>
#include <vector>
#include <unordered_map>

void  NextGreaterElement(std::vector<int>& nums1 , std::vector<int>& nums2){


    int n1 = nums1.size();
    int n2 = nums2.size();
    std::vector<int> res;
    for (int i = 0 ; i < n1 ; i++){
        for (int j = 0 ; j < n2 ; j++){
            if(nums1[i] == nums2[j]){
                int next =  -1;
                for(int  k = j+1 ; k < n2; k++){
                   if (nums2[k] > nums2[j]) {
                        next = nums2[k];
                        break;
                    }

                }
             
                res.push_back(next);
                break;
                


            }
        }
    }

    for(auto n :res ) std::cout  << n << " ";


}


void NextGreaterElementHashMap(std::vector<int>& nums1 , std::vector<int>& nums2){

    std::unordered_map<int , int> mp;
    int n = nums2.size();

    for(int i =0 ; i < n-1 ; i++){

        mp[nums2[i]] =  nums2[i+1];

    }

    for (auto p : mp) std::cout << "keh " << p.first << " value " << p.second << std::endl;

    std::vector<int> res;


    for(int i = 0 ; i < nums1.size() ; i++){

        if(mp[nums1[i]] < nums1[i]){
            res.push_back(-1);
        }else{
            res.push_back(mp[nums1[i]]);
        }

    }

    for(auto r : res) std::cout << r << " ";
}


int main(){

    std::vector<int> nums1 = {4,1,2 };
    std::vector<int> nums2 = {1,3,4,2};
    //NextGreaterElement(nums1 , nums2);
    NextGreaterElementHashMap(nums1,nums2);
    return 0;
}