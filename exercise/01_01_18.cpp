// 请看以下递归函数：
// public static int mystery(int a, int b)
// {
//  if (b == 0) return 0;
//  if (b % 2 == 0) return mystery(a+a, b/2);
//  return mystery(a+a, b/2) + a;
// }
// mystery(2, 25) 和 mystery(3, 11) 的返回值是多少？给定正整数 a 和 b，mystery(a,b)
// 计算的结果是什么？将代码中的 + 替换为 * 并将 return 0 改为 return 1，然后回答相同
// 的问题。
#include <iostream>

int mystery(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b % 2 == 0) {
        return mystery(a + a, b / 2);
    }
    return mystery(a + a, b / 2) + a;
}

int new_mystery(int a, int b) {
    if (b == 0) {
        return 1;
    }
    if (b % 2 == 0) {
        return new_mystery(a * a, b / 2);
    }
    return new_mystery(a * a, b / 2) * a;
}

int main() {
    std::cout << mystery(2, 25) << std::endl;
    std::cout << mystery(3, 11) << std::endl;
    std::cout << new_mystery(2, 25) << std::endl;
    std::cout << new_mystery(3, 11) << std::endl;
    return 0;
}