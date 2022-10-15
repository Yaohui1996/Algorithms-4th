// 将三个数字排序。假设 a、b、c 和 t 都是同一种原始数字类型的变量。证明以下代码能够将 a、 b、c 按照升序排列：
// if (a > b) { t = a; a = b; b = t; }
// if (a > c) { t = a; a = c; c = t; }
// if (b > c) { t = b; b = c; c = t; }

#include <iostream>

int main() {
    int a = 3;
    int b = 2;
    int c = 1;
    int t;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    return 0;
}