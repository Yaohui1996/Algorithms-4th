// 给出使用欧几里得算法计算 105 和 24 的最大公约数的过程中得到的一系列 p 和 q 的值。扩展该
// 算法中的代码得到一个程序 Euclid，从命令行接受两个参数，计算它们的最大公约数并打印出每
// 次调用递归方法时的两个参数。使用你的程序计算 1 111 111 和 1 234 567 的最大公约数。

#include <iostream>

int gcd(const int p, const int q) {
    std::cout << "p:" << p << " q:" << q << std::endl;
    if (q == 0) {
        return p;
    }
    int r = p % q;
    return gcd(q, r);
}

int main(int argc, char* argv[]) {
    // gcd(105, 24);
    // gcd(1111111, 1234567);
    // gcd(std::stoi(argv[1]), std::stoi(argv[2]));
    auto result = gcd(std::stoi(argv[1]), std::stoi(argv[2]));
    std::cout << argv[1] << "和" << argv[2] << "的最大公约数为: " << result << std::endl;
    return 0;
}