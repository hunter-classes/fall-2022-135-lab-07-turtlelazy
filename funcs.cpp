#include <iostream>
#include "funcs.h"
#include <string>
#include <cctype>

std::string removeLeadingSpaces(std::string line);

std::string removeLeadingSpaces(std::string line){
    std::string return_string = "";
    bool remove_spaces = true;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == '\n'){
            remove_spaces = true;
        }
        else if(!isspace(line[i])){
            remove_spaces = false;
        }
        if (!isspace(line[i]) || line[i] == '\n' || !remove_spaces){
            return_string += line[i];
        }
    }
    return return_string;
}