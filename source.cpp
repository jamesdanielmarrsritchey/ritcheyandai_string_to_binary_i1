#include <iostream>
#include <bitset>
#include <string>

int main(int argc, char *argv[]) {
    if(argc != 3 || std::string(argv[1]).substr(0, 2) != "--") {
        std::cout << "false" << std::endl;
        return 1;
    }

    std::string str = argv[2];
    if(str.empty()) {
        std::cout << "false" << std::endl;
        return 1;
    }

    for (char& _char : str) {
        std::bitset<8> binary(_char);
        std::cout << binary;
    }
    std::cout << std::endl;

    return 0;
}