// 1.1.1 给出以下表达式的值：
// a. ( 0 + 15 ) / 2
// b. 2.0e-6 * 100000000.1
// c. true && false || true && true

#include <iostream>
#include <string>

int main() {
    std::cout << (0 + 15) / 2 << std::endl;
    std::cout << 2.0e-6 * 100000000.1 << std::endl;
    std::string result = true && false || true && true ? "TRUE" : "FALSE";
    std::cout << result << std::endl;
    return 0;
}