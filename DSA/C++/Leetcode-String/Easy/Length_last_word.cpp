#include <iostream>
#include <string>



 int  LengthOfLastWord(std::string string){

    int length = 0;
    int s = string.size();
    std::cout << s;
    int i = s -1;
    while ( i >= 0 && string[i] == ' ') i--;
  
    while( i >= 0 && string[i] !=' '){
        length++;
        i--;
    }
    
    return length;


}




int main(){

    std::string s = " Hello World  ";
    int res =  LengthOfLastWord(s);
    std::cout << res;
    return 0;
}






