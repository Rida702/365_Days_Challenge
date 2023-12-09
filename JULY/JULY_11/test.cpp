#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, world!";
    std::string substring = "world";

    size_t position = str.find(substring);

    if (position != std::string::npos) {
        std::cout << "Substring found at position: " << position << std::endl;
    } else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;
}

