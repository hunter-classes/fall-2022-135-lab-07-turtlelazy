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

    std::cout << pretiffy(str) << "\n";
    return 0;
}