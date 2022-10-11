// 找出以下递归函数的问题：
// public static String exR2(int n)
// {
//  String s = exR2(n-3) + n + exR2(n-2) + n;
//  if (n <= 0) return "";
//  return s;
// }
// 答：这段代码中的基础情况永远不会被访问。调用 exR2(3) 会产生调用 exR2(0)、exR2(-3) 和
// exR2(-6)，循环往复直到发生 StackOverflowError。

#include <iostream>
#include <string>
std::string exR2(int n) {
    std::string s = exR2(n - 3) + std::to_string(n) + exR2(n - 2) + std::to_string(n);
    if (n <= 0) {
        return "";
    }
    return s;
}

int main() {
    std::string s = exR2(3);
    std::cout << s << std::endl;
    return 0;
}
