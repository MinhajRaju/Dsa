#include <iostream>
#include <vector>
#include <string>


void MergeSortedArryBruteFroce(std::vector<int>& nums1 , std::vector<int>& nums2 ){
    int m = 3-1;
    int n = 3-1;
    nums1.resize(nums1.size() + nums2.size());
    int ns = nums1.size() - 1;
    for(int i = m; i >= 0; i-- ){  
        if(nums1[ns] == 0){
            for(int j = n ; j >=0; j--){               

                if(nums1[i] < nums2[j]){
                    nums1[ns] = nums2[j];
                  
                }
                 if(nums1[i] > nums2[j]){
                    
                    nums1[ns] = nums1[i];
                    nums1[i] = nums2[j];
                
                }
                
            ns--;
            
            }
        }
    }
    for(auto arr : nums1) std::cout << arr << " ";

}


void MergeSortedArryTwoPointer(std::vector<int>& nums1 , std::vector<int>& nums2){

    int m = 3-1;
    int n = 3-1;
    nums1.resize(nums1.size() + nums2.size());
    int ns = nums1.size() - 1;
    for(int i = 0; i < ns; i++){

        if (nums1[m] < nums2[n] ){

            nums1[ns] = nums2[n];
            
            
        }
        if (nums1[m] > nums2[n]){
            nums1[ns] = nums1[m];
            nums1[m] = nums2[n];
        }
        n--;
        ns--;

    }

for(auto arr : nums1) std::cout << arr << " ";

}


void MergeSortedArrayTwoPointerCsSolutionAllCases(std::vector<int>& nums1 , int m , std::vector<int>& nums2 , int n){

    int i = m  -1;
    int j = n - 1;
    int k = m+n-1;

    while(i >=0 && j >= 0){

        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }else{
            nums1[k]  = nums2[j];
            j--;
        }
        k--;

    }

    while (j >=0){
        nums1[k] = nums2[j];
        j--;
        k--;

    }

    for (auto x :  nums1) std::cout << x << " ";

}




int main(){

    std::vector<int> nums1 = {1,6,8 ,0 , 0 ,0};
    std::vector<int> nums2 = {7,10,12};
    //MergeSortedArryBruteFroce(nums1 , nums2);
    //MergeSortedArryTwoPointer(nums1 , nums2);
    int m = 3 , n = 3;
    MergeSortedArrayTwoPointerCsSolutionAllCases(nums1 , m , nums2 , n);

    return 0;
}