// 1.1.5 编写一段程序，如果 double 类型的变量 x 和 y 都严格位于 0 和 1 之间则打印 true，否则打印 false。

#include "StdOut.h"

using namespace yaohui::algorithms_4th;

int main() {
    double x = 0.5;
    double y = 0.3;
    if (x > 0.0 && x < 1.0 && y > 0.0 && y < 1.0) {
        StdOut::println("true");
    } else {
        StdOut::println("false");
    }
    return 0;
}