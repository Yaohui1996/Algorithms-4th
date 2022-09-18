// 1.1.6 下面这段程序会打印出什么？

#include "StdOut.h"

int main() {
    int f = 0;
    int g = 1;
    for (int i = 0; i <= 15; i++) {
        yaohui::algorithms_4th::StdOut::println(f);
        f = f + g;
        g = f - g;
    }
    return 0;
}
