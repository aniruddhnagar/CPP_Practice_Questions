//C.h
#include <string>

// Nested namespace declarations are also allowed:
namespace Concate {

    namespace String {
        std::string add(std::string x, std::string y) { return x + y; }
    }

    namespace Integer {
        int add(int x, int y) { return x + y; }
    }
}