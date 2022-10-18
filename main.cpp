#include <iostream>
#include "funcs.h"


int main(){

    std::string test_string = "\nasdasdasd\ndsa wq \nsad \r asd w   pind wq\nqrw \nr qwojdwqpdoj \nrasdijads ijwqoi \n";

    std::cout<< removeLeadingSpaces(test_string) << "\n";

    return 0;
}