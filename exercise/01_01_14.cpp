// 1.1.14 编写一个静态方法 lg()，接受一个整型参数 N，返回不大于 log2(N) 的最大整数。不要使用 Math 库。

// z <= log2(N)
//
//     2^z = N

#include "StdOut.h"
using namespace yaohui::algorithms_4th;
class _01_01_14 {
public:
    static int pow(int x, unsigned int n) {
        if (n == 0) return 1;
        if (n == 1) return x;
        return x * pow(x, n - 1);
    }
    static int lg(int N) {
        for (int i = 0;; ++i) {
            int z = pow(2, i);
            if (z > N) {
                return i - 1;
            }
        }
        return -1;
    }
};

int main() {
    for (int N = 1; N <= 100; ++N) {
        StdOut::mini_printf("不大于 log2({}) 的最大整数: {}\n", N, _01_01_14::lg(N));
    }
    return 0;
}
