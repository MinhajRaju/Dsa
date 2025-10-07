#include <iostream>
#include <vector>
#include <algorithm>


void Assign_cookies(std::vector<int>& child , std::vector<int>& cookie){

    sort(child.begin() , child.end());
    sort(cookie.begin() , cookie.end());

    int i  = 0 , j  = 0;
    int res = 0;

    while(i < child.size() && j < cookie.size()){


        if(cookie[j] >= child[i]){
            i++;
            res++;

        }
        j++;
    }

    std::cout << res;
}



int main(){


    std::vector<int> child  = {1,2,3,4 ,5};
    std::vector<int> cookie = {1};
    
    Assign_cookies(child , cookie);

    return 0;
}