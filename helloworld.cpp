#include "helloworld.h"

std::string makeHello(std::string_view target) {
  return "Hello, " + std::string{target};
}