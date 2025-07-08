#include <iostream>
#include "tokenizer.h"

int main() {
    std::string input = getinput();
    std::vector<std::string> tokens = tokenized(input);

    for (const std::string& holder : tokens) {
        std::cout << holder << " ";
    }
    std::cout << std::endl;

    return 0;
}
