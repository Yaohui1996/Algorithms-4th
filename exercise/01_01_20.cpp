// 编写一个递归的静态方法计算 ln(N!) 的值。

#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>

double ln_fact(uint32_t N) {
    if (N == 0) {
        return 0;
    }
    return std::log(N) + ln_fact(N - 1);
}

int main() {
    for (uint32_t N = 0; N != 100; ++N) {
        std::cout << N << " " << std::fixed << std::setprecision(10) << ln_fact(N) << std::endl;
    }
    return 0;
}
