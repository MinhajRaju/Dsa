#include <iostream>
#include <vector>

int minOperation(std::vector<std::string>& log){

    int depth =  0;


    for(int i = 0; i < log.size() ; i++){


        if(log[i] == "../"){
            depth--;
        }
        else if(log[i] == "./"){
            continue;
        }else{

            depth++;
        }

   

       
    }


     return depth;

}





int main (){

    std::vector<std::string> log = {"d1/", "d2/", "../", "d21/", "./"};


    std::cout << minOperation(log);

    return 0;
}