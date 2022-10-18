#include <iostream>
#include "funcs.h"


int main(){

    std::string test_string = "                int main(){\n"
       " // Hi, I'm a program!\n"
        "int x = 1;\n"
    "for (int i = 0; i < 10; i++){\n"
     "   cout << i;\n"
     "   cout << endl;\n"
    "}\n"
"}\n";

    std::cout << removeLeadingSpaces(test_string) << "\n";

std::cout << countChar("bob { { { lives in a{ very nice{ house with nice furiniture", '{') << "\n";
std::cout << pretiffy(test_string) << "\n";

return 0;
}