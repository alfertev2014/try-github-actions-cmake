#include "helloworld.h"
#include "version.h"

std::string makeHello(std::string_view target) {
    return "Hello, " + std::string{target} + "!";
}

int version() {
    return PROJECT_VERSION_PATCH;
}