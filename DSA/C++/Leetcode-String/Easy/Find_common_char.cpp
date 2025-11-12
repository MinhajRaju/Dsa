#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <algorithm>

/*
Logic এর মূল idea:

প্রথম word এর character frequency নাও → এইটা হবে আমাদের initial common map।

উদাহরণ: "bella" → { b:1, e:1, l:2, a:1 }

পরের word এর সাথে compare করো → frequency এর minimum নাও।

উদাহরণ: "label" → { l:2, a:1, b:1, e:1 }

Compare:

b → min(1,1)=1

e → min(1,1)=1

l → min(2,2)=2

a → min(1,1)=1

common map update হলো → { b:1, e:1, l:2, a:1 }

যদি কোনো character পরের word-এ না থাকে → erase।

এইভাবে নিশ্চিত হয় যে, common map-এ শুধুমাত্র সব word-এ উপস্থিত character থাকে।

সব word-এর সাথে একইভাবে compare করে minimum frequency update করো → শেষ পর্যন্ত common map-এ থাকবে সব word-এর common characters এবং তাদের min frequency।

শেষে result vector-এ frequency অনুযায়ী push করো।

*/

//Chatgpt approch
void findCommonChar(std::vector<std::string>& words){


    std::vector<int> common (26  , INT_MAX);
    //for(auto n : common) std::cout << n << " ";


    for(auto &word :  words){
        std::vector<int> count (26,0);

        for (char c : word) count [c - 'a']++;      
        //for (auto n : count ) std::cout << n << " ";

        for(int i = 0 ; i < 26; i++){
            common[i] = std::min(common[i] , count[i]);
        }
    }
    //std::cout << std::endl;

    std::vector<std::string> result;   

    for(int i = 0;  i  < 26; i++){

        for(int j = 0 ; j < common[i]; j++){


            result.push_back({char('a' + i)});

        }
    }

    for (auto re : result) std::cout << re;

    //for(auto n : common) std::cout << n << " ";

    



}



int main(){

    std::vector<std::string> words = {"bella", "label", "roller"};
    findCommonChar(words);

    return 0;
}