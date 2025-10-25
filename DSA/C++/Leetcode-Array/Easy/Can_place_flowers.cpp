#include <iostream>
#include <vector>



bool CanPlaceFlowers(std::vector<int>& flowerbed){


    int flower = flowerbed.size()-1;
    int n = 1;


    for (int i = 0; i < flower ; i++){

        if(flowerbed[i] == 0 && flowerbed[i+1] != 1 ){
            flowerbed[i] = 1 ;
        }else{
            int j = 0;
            while ( j < flower &&  flowerbed[j] == 1 && flowerbed[j+1] ==0){
                     j +=2;
            }
            flowerbed[j] = 1;
            n--;

          
             
        }

         
    }

    for(auto n : flowerbed) std::cout << n ; 

    if(n == 0)
    {
        return true;
    }


    return false;   




}

/*
chatgpt

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();

        for (int i = 0; i < size && n > 0; i++) {
           
            if (flowerbed[i] == 0) {
                bool left_empty = (i == 0) || (flowerbed[i - 1] == 0);
                bool right_empty = (i == size - 1) || (flowerbed[i + 1] == 0);

                if (left_empty && right_empty) {
                    flowerbed[i] = 1; 
                    n--;               
                }
            }
        }

        return n == 0;
    }
};

হ্যাঁ, একদম ঠিক ধরেছো! ✅

তুমি যেটা বলছো — index-এর সাথে calculation করা (যেমন (i == 0) বা (i == size-1)) মূলত edge cases handle করার জন্য।

চলো step by step দেখাই:

🔹 মূল সমস্যা

যখন আমরা flowerbed[i] চেক করি, তখন decision নিচ্ছি i-1 (left) আর i+1 (right) neighbour দেখেই।

কিন্তু array-এর first বা last index-এ গেলে:

i-1 → first index-এ নেই

i+1 → last index-এ নেই

যদি আমরা সরাসরি flowerbed[i-1] বা flowerbed[i+1] access করি, out of bound error হবে ❌

🔹 সমাধান

তাই আমরা index-এর সাথে calculation করি:

bool left_empty = (i == 0) || (flowerbed[i - 1] == 0);
bool right_empty = (i == size - 1) || (flowerbed[i + 1] == 0);


(i == 0) → first index → left safe automatically ✅

(i == size - 1) → last index → right safe automatically ✅

বাকিগুলো শুধু neighbour check করছে

🔹 Intuition

Edge case = array-এর first বা last element

Calculation with index = edge safe করা

Middle elements = normal neighbour check

*/



int main(){

    std::vector<int> flowerbed = {1,0,0,0,1};
    bool res = CanPlaceFlowers(flowerbed);
    std::cout << res;
    return  0;
}