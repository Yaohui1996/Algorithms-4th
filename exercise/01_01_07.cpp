// 1.1.7 分别给出以下代码段打印出的值：

#include <cmath>

#include "StdOut.h"
using namespace yaohui::algorithms_4th;
int main() {
    /* a */
    double t = 9.0;
    while (std::abs(t - 9.0 / t) > .001) t = (9.0 / t + t) / 2.0;
    StdOut::mini_printf("{}\n", t);
    /* b */
    int sum = 0;
    for (int i = 1; i < 1000; i++)
        for (int j = 0; j < i; j++) sum++;
    StdOut::println(sum);
    /* c */
    sum = 0;
    for (int i = 1; i < 1000; i *= 2)
        for (int j = 0; j < 1000; j++) sum++;
    StdOut::println(sum);
    return 0;
}
