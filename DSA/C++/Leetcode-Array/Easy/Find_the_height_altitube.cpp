#include <iostream>
#include <vector>



int heightAltitube(std::vector<int>& gain ){


    std::vector<int> pre(gain.size()+1);

    pre[0] = 0;


    for(int i = 0 ; i < gain.size() ; i++){

        pre[i+1] = pre[i] + gain[i];
    }


    
    int max = 0;

    for(int i  = 0 ; i < pre.size() ; i++){

        if(max < pre[i]){
            max = pre[i];
        }

    }

    return max;


}



int main(){

    std::vector<int>  gain = {-4,-3,-2,-1,4,3,2};
    int res  =  heightAltitube(gain);


    std::cout << res;


    return 0;


}