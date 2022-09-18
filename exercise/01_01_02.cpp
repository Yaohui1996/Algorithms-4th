// 1.1.2 给出以下表达式的类型和值：
// a. (1 + 2.236)/2
// b. 1 + 2 + 3 + 4.0
// c. 4.1 >= 4
// d. 1 + 2 + "3"

#include <iostream>
#include <string>

int main() {
    std::cout << (1 + 2.236) / 2 << std::endl;
    std::cout << 1 + 2 + 3 + 4.0 << std::endl;
    std::string result = 4.1 >= 4 ? "TRUE" : "FALSE";
    std::cout << result << std::endl;
    std::cout << 1 + 2 + "3" << std::endl;
    return 0;
}