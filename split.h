#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

// s: the string that needs splitting.
// delim: the delimeters. Each containing charater(not the whole delim) is used to split s.
// return a vector, which contains all the tokens
vector<string> split(const string& s, const string & delim){
    char* pch = strtok(strdup(s.c_str()), delim.c_str());
    //char* pch = strtok(const_cast<char*>(s.c_str()), delim.c_str());
    vector<string> tokens;
    while(pch != NULL){
        string str(pch);
        tokens.push_back(str);
        pch = strtok(NULL, delim.c_str());
    }

    return tokens;
}

