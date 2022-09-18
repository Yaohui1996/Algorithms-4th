// 1.1.3 编写一个程序，从命令行得到三个整数参数。
// 如果它们都相等则打印equal，否则打印not equal。

#include <iostream>

int main(int argc, char *argv[]) {
    int a = std::stoi(argv[1]);
    int b = std::stoi(argv[2]);
    int c = std::stoi(argv[3]);
    if (a == b && b == c) {
        std::cout << "equal" << std::endl;
    } else {
        std::cout << "not equal" << std::endl;
    }
    return 0;
}