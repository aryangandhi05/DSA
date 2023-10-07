#include <iostream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::string input = "This is a sample sentence.";
    std::istringstream tokenizer(input);
    std::string token;
    std::vector<std::string> tokens;

    while (tokenizer >> token) {
        tokens.push_back(token);
    }

    for (const std::string& t : tokens) {
        std::cout << t << std::endl;
    }

    return 0;
}
