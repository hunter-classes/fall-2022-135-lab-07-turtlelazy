#include <iostream>
#include "funcs.h"
#include <fstream>
#include <sstream>

int main(){
    std::ifstream file("bad.cpp");
    std::string str;
    if (file)
    {
        std::ostringstream ss;
        ss << file.rdbuf(); // reading data
        str = ss.str();
    }
    //std::cout << str;
    std::cout << "Count Char for: The quick nr{bwori}n f{ox{ j{u{mp{s ov{r{ the \n";
    std::cout << countChar("The quick nr{bwori}n f{ox{ j{u{mp{s ov{r{ the ",'{') << "\n\n";

    std::cout << "Remove Leading Space:\n";
    std::cout << removeLeadingSpaces(str) << "\n\n";

    std::cout << "Adding indentation:\n";
    std::cout << pretiffy(str) << "\n";
    return 0;
}