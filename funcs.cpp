#include <iostream>
#include "funcs.h"
#include <string>
#include <cctype>

std::string add_tabs(int i){
    std::string return_string = "";

    for(int x = 0; x < i; x++){
        return_string += "\t";
    }

    return return_string;
}

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

int countChar(std::string line, char c){
    int count = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            count++;
        }
    }
    return count;
}

//convulted if statement logic?
std::string pretiffy(std::string line){
    std::string return_string = "";
    bool remove_spaces = true;
    int leading_tabs = 0;
    for (int i = 0; i < line.length(); i++)
    {
        //if the line started with a open bracket, adds to tab counter
        if (line[i] == '{')
        {
            leading_tabs += 1;
        }

        //does not remove spaces if it is a character
        if (!isspace(line[i]))
        {
            remove_spaces = false;
        }

        //if it is a character or is a newline character or are removing spaces ->
        //decrement tab counter if it is a closing bracket; add to return_string otherwise
        if (!isspace(line[i]) || line[i] == '\n' || !remove_spaces)
        {
            if (line[i] == '}')
            {
                return_string[return_string.length()-1] = '}';
                leading_tabs -= 1;
            }
            else{
                return_string += line[i];
            }
        }
        //if the character is a newline, start removing spaces and add the tabs that are desired
        if (line[i] == '\n')
        {
            remove_spaces = true;
            return_string += add_tabs(leading_tabs);
        }
    }
    return return_string;
}
