#include <iostream>
#include <vector>


void BuyandSellBruteForce(std::vector<int>& prices){

    int n  = prices.size() -1;
    int max  = 0;
    for (int i=0 ; i < n; i++){   
        for (int j =i+1; j < n; j++){
            if(prices[i] < prices[j] ){
                       
                int profit = prices[j] - prices[i];

                if (max < profit ){ 
                    max = profit;
                }
            }            
        }
    }
    std::cout << max; 
}


void BuyandSell(std::vector<int>& prices){

    int n   = prices.size() - 1;
    int max = 0;
    int p = 0;
    for(int i = 1 ; i < n; i++){

    
        if(prices[i] < prices[p] ){
            p = i;
        }

        if(prices[p] < prices[i]){

            int profit  = prices[i] - prices[p];
            if (max < profit){
                max = profit;
            }
        }

        
        
    }
    std::cout << max;
}



int main(){ 

    std::vector<int> prices = {7,3,1,5,6,4};

    //BuyandSellBruteForce(prices);
    BuyandSell(prices);

    return 0;
}