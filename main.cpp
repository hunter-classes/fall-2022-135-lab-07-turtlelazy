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
    std::cout << "Remove Leading Space:\n";
    std::cout << removeLeadingSpaces(str) << "\n\n";

    std::cout << "Adding indentation:\n";
    std::cout << pretiffy(str) << "\n";
    return 0;
}