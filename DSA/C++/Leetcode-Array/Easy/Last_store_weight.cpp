#include <iostream>
#include <vector>
#include <queue>


void lastStoneWeight(std::vector<int>& nums){

    std::priority_queue<int> pq;

    for(int x : nums) pq.push(x);


    while(pq.size() > 1) {
        int a  = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();

        if(a != b ){
            pq.push(a-b);
        }
    }

    //std::cout <<  pq.empty() ? 0 : pq.top();

    std::cout  << pq.size();



   
}

int main(){

    std::vector<int> nums = { 2,7,4,1,8,1};
    lastStoneWeight(nums);

    return 0;
}