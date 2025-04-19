#include <iostream>

extern int x;

int main(){
    std::cout << "hello world." << std::endl;

    // clang++: error: linker command failed with exit code 1 (use -v to see invocation)
    // std::cout << x;

    return 0;
}