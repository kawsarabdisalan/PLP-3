#include <iostream>
#include <string>

int main(){
    std::string str = "kawsarabdisalan";
    std::string firstHalf, secondHalf;
    size_t middle = str.length()/2;
    firstHalf = str.substr(0, middle);
    secondHalf = str.substr(middle);
    std::cout << "First half: " << firstHalf << std::endl;
    std::cout << "Second half: " << secondHalf << std::endl;

}