#include <iostream>
#include <vector>


std::vector<int> createTargetArray(std::vector<int>& num ,  std::vector<int>& index ){
       
    std::vector<int> target;

    for(int i =0; i < num.size(); i++){
        int pos = index[i];
        int val = num[i];

        target.push_back(0);
       

        for(int j = target.size()-1; j> pos; j-- ){
            target[j] = target[j-1];
        }

        target[pos] = val;

    }
  return target;

}
 

int main(){
    
    std::vector<int> num = {0,1,2,3,4} , index = {0,1,2,2,1};
    std::vector res = createTargetArray(num , index);

    for (auto x : res) {

        std::cout << x << " ";
    }


    return 0;
}