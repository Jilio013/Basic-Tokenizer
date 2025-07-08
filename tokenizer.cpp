#include "tokenizer.h"
#include <iostream>
#include <cctype>  


std::string getinput() {
    std::string input;
    std::cout << "Enter an expression: ";
    std::getline(std::cin, input);
    return input;
}


std::vector<std::string> tokenized(const std::string& input) {
    std::vector<std::string> tokens;
    std::string token;
    for (int i = 0; i < input.size(); i++) {
        char a = input[i];
        if (isdigit(a)) {
            token.push_back(a);
        }

        if (!isdigit(a) && !token.empty()) {
            tokens.push_back(token);
            token.clear();
        }
        if (a == '*' || a == '/' || a == '+' || a == '-') {
            tokens.push_back(std::string{a});
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }

    return tokens;
}
