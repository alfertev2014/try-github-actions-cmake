#include <iostream>

#include "helloworld.h"

int main(int argc, char *argv[]) {
    std::cout << makeHello("world") << std::endl;
    std::cout << "Version: " << version() << std::endl;
    return 0;
}