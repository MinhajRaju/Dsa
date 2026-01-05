#include <iostream>
#include <vector>



std::vector<std::string> stringMatching(std::vector<std::string>& words){

   std::vector<std::string> result;
   int n = words.size();


   for(int i = 0; i < n ; i++){

        for(int j = 0 ; j < n ; j++){

            if(i != j){
                if(words[j].find(words[i]) !=  std::string::npos){
                    result.push_back(words[i]);
                    break;
                }
            }

        }

   }

   return result;

}




int main(){

    std::vector<std::string> words = {"mass", "as", "hero", "superhero"};
    std::vector<std::string>  res =  stringMatching(words);

    for(auto x : res){
        std::cout << x << " ";
    }

    return 0;
}