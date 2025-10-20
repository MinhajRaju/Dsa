#include <iostream>
#include <vector>




char NextGreaterLetter(std::vector<char>& letter ){

    char target = 'z';


    for (int i = 0 ; i < letter.size() ; i ++){


        if(letter[i] > target){
            return letter[i];
        }

      

    };

  return letter[0];
  //test2
};


int main(){

    std::vector<char> letter = {'x','x','y','y' };
    char res = NextGreaterLetter(letter);
    std::cout << res;
    return 0;


}