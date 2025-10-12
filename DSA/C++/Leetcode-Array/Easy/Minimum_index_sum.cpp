#include <iostream>
#include <vector>
#include <climits>

void MinimumIndexSum(std::vector<std::string>& list1 ,std::vector<std::string>& list2 ){


    std::vector<std::string> res;

    int min =INT_MAX;

    for(int i = 0; i < list1.size(); i++){
           
        for ( int j = 0 ; j < list2.size(); j++){

            if(list1[i] == list2[j]){
                
                if(min > i+j){                    
                   min = i+j;                    
                 
                   res.push_back(list1[i]);
                
                }else if (min == i+j ) {
                res.push_back(list1[i]);
            }
             
             
            }
           
            
        }
        
 
    }

   for (auto n : res) std::cout << n;

}



int main(){

    std::vector<std::string> list1 = {"Shogun","Tapioca Express","Burger King","KFC"};;


    std::vector<std::string> list2 = {"Piatti","The Grill at Torrey Pines","Hungry Hunter Steakhouse","Shogun"};

    MinimumIndexSum(list1 , list2);

    return  0;
}